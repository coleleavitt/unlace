__int64 __fastcall sub_838500(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int8 **v10; // rax
  unsigned __int8 **v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned __int8 *v14; // rbp
  _BYTE *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // r13
  void *v23; // rdi

  v5 = *(_QWORD *)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    if ( *(_DWORD *)(v5 + 8) <= 0x40u )
      v5 = *(_QWORD *)v5;
    else
      v5 = **(_QWORD **)v5;
  }
  v6 = sub_B06400(a2, *(_QWORD *)(a1 + 16));
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    if ( v7 )
      a3 = sub_AC6DA0(v7);
  }
  if ( (unsigned int)sub_B064C0(*(_QWORD *)(a1 + 16)) < v6 || HIDWORD(v5) )
  {
    v12 = sub_A2E1A0(a1, a3, 2250, 0);
    v13 = (_QWORD *)v12;
    if ( v12 )
    {
      v14 = *(unsigned __int8 **)v12;
      if ( !*(_QWORD *)v12 )
      {
        v17 = *(_QWORD *)(v12 + 8);
        v18 = *(_DWORD *)(v17 + 14976);
        if ( v18 )
        {
          v19 = (unsigned int)(v18 - 1);
          *(_DWORD *)(v17 + 14976) = v19;
          v14 = *(unsigned __int8 **)(v17 + 8 * v19 + 14848);
          v20 = *((unsigned int *)v14 + 134);
          *v14 = 0;
          v21 = *((_QWORD *)v14 + 66);
          *((_DWORD *)v14 + 106) = 0;
          v22 = v21 + (v20 << 6);
          while ( v21 != v22 )
          {
            while ( 1 )
            {
              v22 -= 64;
              v23 = *(void **)(v22 + 24);
              if ( v23 == (void *)(v22 + 40) )
                break;
              operator delete(v23, *(_QWORD *)(v22 + 40) + 1LL);
              if ( v21 == v22 )
                goto LABEL_23;
            }
          }
LABEL_23:
          *((_DWORD *)v14 + 134) = 0;
        }
        else
        {
          v14 = (unsigned __int8 *)operator new(0x3A0u);
          *v14 = 0;
          *((_QWORD *)v14 + 12) = v14 + 112;
          *((_QWORD *)v14 + 16) = v14 + 144;
          *((_QWORD *)v14 + 20) = v14 + 176;
          *((_QWORD *)v14 + 24) = v14 + 208;
          *((_QWORD *)v14 + 28) = v14 + 240;
          *((_QWORD *)v14 + 32) = v14 + 272;
          *((_QWORD *)v14 + 36) = v14 + 304;
          *((_QWORD *)v14 + 40) = v14 + 336;
          *((_QWORD *)v14 + 44) = v14 + 368;
          *((_QWORD *)v14 + 48) = v14 + 400;
          *((_QWORD *)v14 + 13) = 0;
          v14[112] = 0;
          *((_QWORD *)v14 + 17) = 0;
          v14[144] = 0;
          *((_QWORD *)v14 + 21) = 0;
          v14[176] = 0;
          *((_QWORD *)v14 + 25) = 0;
          v14[208] = 0;
          *((_QWORD *)v14 + 29) = 0;
          v14[240] = 0;
          *((_QWORD *)v14 + 33) = 0;
          v14[272] = 0;
          *((_QWORD *)v14 + 37) = 0;
          v14[304] = 0;
          *((_QWORD *)v14 + 41) = 0;
          v14[336] = 0;
          *((_QWORD *)v14 + 45) = 0;
          v14[368] = 0;
          *((_QWORD *)v14 + 49) = 0;
          v14[400] = 0;
          *((_QWORD *)v14 + 52) = v14 + 432;
          *((_QWORD *)v14 + 53) = 0x800000000LL;
          *((_QWORD *)v14 + 66) = v14 + 544;
          *((_QWORD *)v14 + 67) = 0x600000000LL;
        }
        *v13 = v14;
      }
      v14[*v14 + 1] = 3;
      v15 = (_BYTE *)*v13;
      v16 = *(unsigned __int8 *)*v13;
      *v15 = v16 + 1;
      *(_QWORD *)&v15[8 * v16 + 16] = v5;
    }
  }
  else
  {
    v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL) + 136LL);
    result = 1;
    if ( v8 >= v5 )
      return result;
    v10 = (unsigned __int8 **)sub_A2E1A0(a1, a3, 2245, 0);
    v11 = v10;
    if ( v10 )
    {
      sub_8356A0(v10, v5, 3u);
      sub_8356A0(v11, v8, 3u);
    }
  }
  return 0;
}

