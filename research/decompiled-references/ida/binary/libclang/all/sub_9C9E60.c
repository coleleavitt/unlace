__int64 __fastcall sub_9C9E60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // r15
  unsigned __int8 *v5; // r12
  _BYTE *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r13
  void *v16; // rdi
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  char v18; // [rsp+8h] [rbp-40h]

  v2 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v3 = (__int64 *)sub_A2E240(a1, v2, 2287, 0);
  v4 = *(_QWORD *)((*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( v3 )
  {
    v5 = (unsigned __int8 *)*v3;
    if ( !*v3 )
    {
      v10 = v3[1];
      v11 = *(_DWORD *)(v10 + 14976);
      if ( v11 )
      {
        v12 = (unsigned int)(v11 - 1);
        *(_DWORD *)(v10 + 14976) = v12;
        v5 = *(unsigned __int8 **)(v10 + 8 * v12 + 14848);
        v13 = *((unsigned int *)v5 + 134);
        v14 = *((_QWORD *)v5 + 66);
        *v5 = 0;
        *((_DWORD *)v5 + 106) = 0;
        v15 = v14 + (v13 << 6);
        while ( v14 != v15 )
        {
          while ( 1 )
          {
            v15 -= 64;
            v16 = *(void **)(v15 + 24);
            if ( v16 == (void *)(v15 + 40) )
              break;
            operator delete(v16, *(_QWORD *)(v15 + 40) + 1LL);
            if ( v14 == v15 )
              goto LABEL_10;
          }
        }
LABEL_10:
        *((_DWORD *)v5 + 134) = 0;
      }
      else
      {
        v5 = (unsigned __int8 *)operator new(0x3A0u);
        *v5 = 0;
        *((_QWORD *)v5 + 12) = v5 + 112;
        *((_QWORD *)v5 + 16) = v5 + 144;
        *((_QWORD *)v5 + 20) = v5 + 176;
        *((_QWORD *)v5 + 24) = v5 + 208;
        *((_QWORD *)v5 + 28) = v5 + 240;
        *((_QWORD *)v5 + 32) = v5 + 272;
        *((_QWORD *)v5 + 36) = v5 + 304;
        *((_QWORD *)v5 + 40) = v5 + 336;
        *((_QWORD *)v5 + 44) = v5 + 368;
        *((_QWORD *)v5 + 48) = v5 + 400;
        *((_QWORD *)v5 + 13) = 0;
        v5[112] = 0;
        *((_QWORD *)v5 + 17) = 0;
        v5[144] = 0;
        *((_QWORD *)v5 + 21) = 0;
        v5[176] = 0;
        *((_QWORD *)v5 + 25) = 0;
        v5[208] = 0;
        *((_QWORD *)v5 + 29) = 0;
        v5[240] = 0;
        *((_QWORD *)v5 + 33) = 0;
        v5[272] = 0;
        *((_QWORD *)v5 + 37) = 0;
        v5[304] = 0;
        *((_QWORD *)v5 + 41) = 0;
        v5[336] = 0;
        *((_QWORD *)v5 + 45) = 0;
        v5[368] = 0;
        *((_QWORD *)v5 + 49) = 0;
        v5[400] = 0;
        *((_QWORD *)v5 + 52) = v5 + 432;
        *((_QWORD *)v5 + 53) = 0x800000000LL;
        *((_QWORD *)v5 + 66) = v5 + 544;
        *((_QWORD *)v5 + 67) = 0x600000000LL;
      }
      *v3 = (__int64)v5;
    }
    v5[*v5 + 1] = 8;
    v6 = (_BYTE *)*v3;
    v7 = *(unsigned __int8 *)*v3;
    *v6 = v7 + 1;
    *(_QWORD *)&v6[8 * v7 + 16] = v4;
    v8 = sub_AC7B80(*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    v18 = 1;
    v17 = v8;
    sub_839C90(v3, &v17);
  }
  return 0;
}

