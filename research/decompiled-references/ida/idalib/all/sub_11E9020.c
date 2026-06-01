__int64 __fastcall sub_11E9020(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char **v3; // rax
  char *v4; // rbx
  size_t v5; // rax
  signed __int64 v6; // rbp
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbp
  void *v17; // rdi
  unsigned __int8 *v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+8h] [rbp-70h]

  v2 = sub_10DCD30(a2, 0xCA1u);
  if ( !v2 )
    return 0;
  v3 = *(const char ***)(v2 + 48);
  v4 = (char *)*v3;
  if ( *v3 )
  {
    v5 = j__strlen(*v3);
    v6 = v5;
    if ( v5 == 11 )
    {
      if ( *(_QWORD *)v4 == 0x72656C69706D6F63LL && *((_WORD *)v4 + 4) == 29229 && v4[10] == 116 )
        return 0;
    }
    else if ( v5 == 8 && *(_QWORD *)v4 == 0x6D726F6674616C70LL )
    {
      return 0;
    }
  }
  else
  {
    v6 = 0;
  }
  sub_FC70B0((__int64)&v18, **(_QWORD **)(a1 + 8), 0, 499);
  sub_AEC220(&v18, v4, v6);
  v8 = v18;
  if ( !v18 )
  {
    v11 = v19;
    v12 = *(_DWORD *)(v19 + 14976);
    if ( v12 )
    {
      v13 = (unsigned int)(v12 - 1);
      *(_DWORD *)(v19 + 14976) = v13;
      v8 = *(unsigned __int8 **)(v11 + 8 * v13 + 14848);
      v14 = *((unsigned int *)v8 + 134);
      *v8 = 0;
      v15 = *((_QWORD *)v8 + 66);
      *((_DWORD *)v8 + 106) = 0;
      v16 = v15 + (v14 << 6);
      while ( v15 != v16 )
      {
        while ( 1 )
        {
          v16 -= 64;
          v17 = *(void **)(v16 + 24);
          if ( v17 == (void *)(v16 + 40) )
            break;
          operator delete(v17);
          if ( v15 == v16 )
            goto LABEL_19;
        }
      }
LABEL_19:
      *((_DWORD *)v8 + 134) = 0;
    }
    else
    {
      v8 = (unsigned __int8 *)operator new(0x3A0u);
      *v8 = 0;
      *((_QWORD *)v8 + 12) = v8 + 112;
      *((_QWORD *)v8 + 16) = v8 + 144;
      *((_QWORD *)v8 + 20) = v8 + 176;
      *((_QWORD *)v8 + 24) = v8 + 208;
      *((_QWORD *)v8 + 28) = v8 + 240;
      *((_QWORD *)v8 + 32) = v8 + 272;
      *((_QWORD *)v8 + 36) = v8 + 304;
      *((_QWORD *)v8 + 40) = v8 + 336;
      *((_QWORD *)v8 + 44) = v8 + 368;
      *((_QWORD *)v8 + 48) = v8 + 400;
      *((_QWORD *)v8 + 52) = v8 + 432;
      *((_QWORD *)v8 + 13) = 0;
      v8[112] = 0;
      *((_QWORD *)v8 + 17) = 0;
      v8[144] = 0;
      *((_QWORD *)v8 + 21) = 0;
      v8[176] = 0;
      *((_QWORD *)v8 + 25) = 0;
      v8[208] = 0;
      *((_QWORD *)v8 + 29) = 0;
      v8[240] = 0;
      *((_QWORD *)v8 + 33) = 0;
      v8[272] = 0;
      *((_QWORD *)v8 + 37) = 0;
      v8[304] = 0;
      *((_QWORD *)v8 + 41) = 0;
      v8[336] = 0;
      *((_QWORD *)v8 + 45) = 0;
      v8[368] = 0;
      *((_QWORD *)v8 + 49) = 0;
      v8[400] = 0;
      *((_QWORD *)v8 + 53) = 0x800000000LL;
      *((_QWORD *)v8 + 66) = v8 + 544;
      *((_QWORD *)v8 + 67) = 0x600000000LL;
    }
    v18 = v8;
  }
  v8[*v8 + 1] = 1;
  v9 = v18;
  v10 = *v18;
  *v18 = v10 + 1;
  *(_QWORD *)&v9[8 * v10 + 16] = "darwin";
  sub_AEA040((__int64)&v18);
  return 0;
}
