__int64 __fastcall sub_18D7E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int8 *v9; // rbx
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r13
  void *v18; // rdi
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_168B9E0((_QWORD *)a1);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(*(_QWORD *)(a1 + 16));
  v19[0] = v7;
  v8 = *sub_1587BC0(v4, v19, v2, v3, v5, v6) + 32LL * *(unsigned int *)(a1 + 128);
  v9 = *(unsigned __int8 **)(v8 + 8);
  if ( !v9 )
  {
    v12 = *(_QWORD *)(v8 + 16);
    v13 = *(_DWORD *)(v12 + 14976);
    if ( v13 )
    {
      v14 = (unsigned int)(v13 - 1);
      *(_DWORD *)(v12 + 14976) = v14;
      v9 = *(unsigned __int8 **)(v12 + 8 * v14 + 14848);
      v15 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v16 = *((_QWORD *)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v17 = v16 + (v15 << 6);
      while ( v16 != v17 )
      {
        while ( 1 )
        {
          v17 -= 64;
          v18 = *(void **)(v17 + 24);
          if ( v18 == (void *)(v17 + 40) )
            break;
          operator delete(v18);
          if ( v16 == v17 )
            goto LABEL_12;
        }
      }
LABEL_12:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v9 = (unsigned __int8 *)operator new(0x3A0u);
      *v9 = 0;
      *((_QWORD *)v9 + 12) = v9 + 112;
      *((_QWORD *)v9 + 16) = v9 + 144;
      *((_QWORD *)v9 + 20) = v9 + 176;
      *((_QWORD *)v9 + 24) = v9 + 208;
      *((_QWORD *)v9 + 28) = v9 + 240;
      *((_QWORD *)v9 + 32) = v9 + 272;
      *((_QWORD *)v9 + 36) = v9 + 304;
      *((_QWORD *)v9 + 40) = v9 + 336;
      *((_QWORD *)v9 + 44) = v9 + 368;
      *((_QWORD *)v9 + 48) = v9 + 400;
      *((_QWORD *)v9 + 52) = v9 + 432;
      *((_QWORD *)v9 + 13) = 0;
      v9[112] = 0;
      *((_QWORD *)v9 + 17) = 0;
      v9[144] = 0;
      *((_QWORD *)v9 + 21) = 0;
      v9[176] = 0;
      *((_QWORD *)v9 + 25) = 0;
      v9[208] = 0;
      *((_QWORD *)v9 + 29) = 0;
      v9[240] = 0;
      *((_QWORD *)v9 + 33) = 0;
      v9[272] = 0;
      *((_QWORD *)v9 + 37) = 0;
      v9[304] = 0;
      *((_QWORD *)v9 + 41) = 0;
      v9[336] = 0;
      *((_QWORD *)v9 + 45) = 0;
      v9[368] = 0;
      *((_QWORD *)v9 + 49) = 0;
      v9[400] = 0;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v8 + 8) = v9;
  }
  v9[*v9 + 1] = 1;
  v10 = *(_BYTE **)(v8 + 8);
  result = (unsigned __int8)*v10;
  *v10 = result + 1;
  *(_QWORD *)&v10[8 * result + 16] = a2;
  return result;
}
