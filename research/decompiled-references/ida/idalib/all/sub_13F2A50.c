void __fastcall sub_13F2A50(__int64 a1, int a2)
{
  unsigned __int8 *v2; // rbx
  _BOOL8 v3; // r13
  unsigned __int8 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbp
  void *v12; // rdi
  unsigned __int8 *v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+8h] [rbp-70h]

  sub_FC70B0((__int64)&v13, *(_QWORD *)(*(_QWORD *)a1 + 8LL), a2, 1068);
  v2 = v13;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 48LL) != 0;
  if ( !v13 )
  {
    v6 = v14;
    v7 = *(_DWORD *)(v14 + 14976);
    if ( v7 )
    {
      v8 = (unsigned int)(v7 - 1);
      *(_DWORD *)(v14 + 14976) = v8;
      v2 = *(unsigned __int8 **)(v6 + 8 * v8 + 14848);
      v9 = *((unsigned int *)v2 + 134);
      *v2 = 0;
      v10 = *((_QWORD *)v2 + 66);
      *((_DWORD *)v2 + 106) = 0;
      v11 = v10 + (v9 << 6);
      while ( v10 != v11 )
      {
        while ( 1 )
        {
          v11 -= 64;
          v12 = *(void **)(v11 + 24);
          if ( v12 == (void *)(v11 + 40) )
            break;
          operator delete(v12);
          if ( v10 == v11 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *((_DWORD *)v2 + 134) = 0;
    }
    else
    {
      v2 = (unsigned __int8 *)operator new(0x3A0u);
      *v2 = 0;
      *((_QWORD *)v2 + 12) = v2 + 112;
      *((_QWORD *)v2 + 16) = v2 + 144;
      *((_QWORD *)v2 + 20) = v2 + 176;
      *((_QWORD *)v2 + 24) = v2 + 208;
      *((_QWORD *)v2 + 28) = v2 + 240;
      *((_QWORD *)v2 + 32) = v2 + 272;
      *((_QWORD *)v2 + 36) = v2 + 304;
      *((_QWORD *)v2 + 40) = v2 + 336;
      *((_QWORD *)v2 + 44) = v2 + 368;
      *((_QWORD *)v2 + 48) = v2 + 400;
      *((_QWORD *)v2 + 52) = v2 + 432;
      *((_QWORD *)v2 + 13) = 0;
      v2[112] = 0;
      *((_QWORD *)v2 + 17) = 0;
      v2[144] = 0;
      *((_QWORD *)v2 + 21) = 0;
      v2[176] = 0;
      *((_QWORD *)v2 + 25) = 0;
      v2[208] = 0;
      *((_QWORD *)v2 + 29) = 0;
      v2[240] = 0;
      *((_QWORD *)v2 + 33) = 0;
      v2[272] = 0;
      *((_QWORD *)v2 + 37) = 0;
      v2[304] = 0;
      *((_QWORD *)v2 + 41) = 0;
      v2[336] = 0;
      *((_QWORD *)v2 + 45) = 0;
      v2[368] = 0;
      *((_QWORD *)v2 + 49) = 0;
      v2[400] = 0;
      *((_QWORD *)v2 + 53) = 0x800000000LL;
      *((_QWORD *)v2 + 66) = v2 + 544;
      *((_QWORD *)v2 + 67) = 0x600000000LL;
    }
    v13 = v2;
  }
  v2[*v2 + 1] = 2;
  v4 = v13;
  v5 = *v13;
  *v13 = v5 + 1;
  *(_QWORD *)&v4[8 * v5 + 16] = v3;
  sub_AEA040((__int64)&v13);
}
