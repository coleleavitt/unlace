void *__fastcall sub_1AD40(__int64 a1, char a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r13d
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // rax
  void *v11; // r12
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // [rsp+Bh] [rbp-5Dh] BYREF
  char v16; // [rsp+Fh] [rbp-59h]
  char v17[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v2 == (char *)sub_A240 )
    v3 = *(_QWORD *)(a1 + 96);
  else
    v3 = v2();
  if ( !v3 || *(_BYTE *)(a1 + 8) )
    return nullptr;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = 0;
    while ( a2 != *(_BYTE *)v5 )
    {
      ++v6;
      v5 += 8;
      if ( v4 == v6 )
        goto LABEL_19;
    }
    v7 = *(_DWORD *)(v5 + 4);
  }
  else
  {
LABEL_19:
    v7 = *(_DWORD *)(a1 + 64);
  }
  if ( (unsigned int)sub_1A770((__int64 *)a1, (__int64)&v15, 5, v7) )
    return nullptr;
  v8 = _byteswap_ulong(v15);
  v15 = v8;
  if ( v8 < 0 || *(_BYTE *)(a1 + 69) != 1 && v8 > 0x2000 )
  {
    v13 = sub_2A6A0();
    sub_19A00((__int64)v17, 25, v13, 0);
    sub_1AC00((__int64)"%s rpc: bad packet length", v17);
    return nullptr;
  }
  v9 = (unsigned int)v8;
  v10 = sub_29D30((unsigned int)v8 + 5LL);
  v11 = (void *)v10;
  if ( !v10 )
  {
    v14 = sub_2A6A0();
    sub_19A00((__int64)v17, 25, v14, 0);
    sub_1AC00((__int64)"%s rpc: no local memory", v17);
    return nullptr;
  }
  *(_DWORD *)v10 = v15;
  *(_BYTE *)(v10 + 4) = v16;
  if ( (unsigned int)sub_1A770((__int64 *)a1, v10 + 5, v9, v7) )
  {
    j__free(v11);
    return nullptr;
  }
  return v11;
}

