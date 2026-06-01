void __fastcall sub_E85C20(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r13
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int8 v7; // al
  __int64 v8; // rsi
  void **v9; // r14
  void **v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  void **v14; // r13
  void **v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  void **v19; // r13
  void **v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  _BYTE *v24; // rax
  void **v25; // rbx
  void **v26; // r14
  __int64 v27; // rsi
  unsigned int v28; // r15d
  void **v29; // rbp
  void **v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  size_t v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rax
  void **v39; // rbp
  __int64 v40; // [rsp+8h] [rbp-E0h]
  __int64 v41; // [rsp+8h] [rbp-E0h]
  __int64 v42; // [rsp+14h] [rbp-D4h] BYREF
  char v43; // [rsp+1Ch] [rbp-CCh]
  void **v44; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+28h] [rbp-C0h]
  _BYTE v46[48]; // [rsp+30h] [rbp-B8h] BYREF
  void *v47; // [rsp+60h] [rbp-88h] BYREF
  int v48; // [rsp+68h] [rbp-80h]

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v44 = (void **)v46;
  v45 = 0x300000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL);
        if ( (unsigned int)(v4 - 2) > 1 )
          break;
        v5 = sub_A72040(*(_QWORD **)(*a1 + 8), v2);
        v6 = v5;
        if ( !v5 || (unsigned int)*(unsigned __int8 *)(v5 + 16) - 2 > 1 )
          BUG();
        v7 = *(_BYTE *)(v5 + 19);
        v8 = *(_QWORD *)(v6 + 40);
        if ( (v7 & 2) != 0 )
        {
          v48 = *(_DWORD *)(v8 + 8);
          if ( (unsigned int)v48 > 0x40 )
            sub_2205510(&v47);
          else
            v47 = *(void **)v8;
        }
        else
        {
          v48 = 8 * ((v7 >> 2) & 0x1F);
          if ( v48 > 64 )
            sub_2205470(&v47, v8, 0);
          else
            v47 = (void *)v8;
        }
        v9 = v44;
        v10 = &v47;
        v11 = (unsigned int)v45 + 1LL;
        v12 = (unsigned __int64)&v44[2 * (unsigned int)v45];
        if ( v11 > HIDWORD(v45) )
        {
          if ( v44 > &v47 || v12 <= (unsigned __int64)&v47 )
          {
            sub_E7F010((__int64)&v44, v11);
            v10 = &v47;
            v12 = (unsigned __int64)&v44[2 * (unsigned int)v45];
          }
          else
          {
            sub_E7F010((__int64)&v44, v11);
            v10 = (void **)((char *)v44 + (char *)&v47 - (char *)v9);
            v12 = (unsigned __int64)&v44[2 * (unsigned int)v45];
          }
        }
        *(_DWORD *)(v12 + 8) = *((_DWORD *)v10 + 2);
        *(_QWORD *)v12 = *v10;
        *((_DWORD *)v10 + 2) = 0;
        LODWORD(v45) = v45 + 1;
        if ( (unsigned int)v48 > 0x40 )
        {
          if ( v47 )
            operator delete[](v47);
        }
        v2 = *(_QWORD *)(v6 + 32);
      }
      if ( (_BYTE)v4 != 5 )
        break;
      v18 = sub_A72040(*(_QWORD **)(*a1 + 8), v2);
      if ( v18 && *(_BYTE *)(v18 + 16) != 5 )
        v18 = 0;
      v19 = v44;
      v20 = &v47;
      v48 = 32;
      v47 = nullptr;
      v21 = (unsigned int)v45 + 1LL;
      v22 = (unsigned __int64)&v44[2 * (unsigned int)v45];
      if ( v21 > HIDWORD(v45) )
      {
        v41 = v18;
        if ( v44 > &v47 || v22 <= (unsigned __int64)&v47 )
        {
          sub_E7F010((__int64)&v44, v21);
          v20 = &v47;
          v18 = v41;
          v22 = (unsigned __int64)&v44[2 * (unsigned int)v45];
        }
        else
        {
          sub_E7F010((__int64)&v44, v21);
          v18 = v41;
          v20 = (void **)((char *)v44 + (char *)&v47 - (char *)v19);
          v22 = (unsigned __int64)&v44[2 * (unsigned int)v45];
        }
      }
      *(_DWORD *)(v22 + 8) = *((_DWORD *)v20 + 2);
      *(_QWORD *)v22 = *v20;
      *((_DWORD *)v20 + 2) = 0;
      LODWORD(v45) = v45 + 1;
      v2 = *(_QWORD *)(v18 + 32);
    }
    if ( (_BYTE)v4 != 6 )
      break;
    v13 = sub_A72040(*(_QWORD **)(*a1 + 8), v2);
    if ( v13 && *(_BYTE *)(v13 + 16) != 6 )
      v13 = 0;
    v14 = v44;
    v15 = &v47;
    v48 = 32;
    v47 = nullptr;
    v16 = (unsigned int)v45 + 1LL;
    v17 = (unsigned __int64)&v44[2 * (unsigned int)v45];
    if ( v16 > HIDWORD(v45) )
    {
      v40 = v13;
      if ( v44 > &v47 || v17 <= (unsigned __int64)&v47 )
      {
        sub_E7F010((__int64)&v44, v16);
        v15 = &v47;
        v13 = v40;
        v17 = (unsigned __int64)&v44[2 * (unsigned int)v45];
      }
      else
      {
        sub_E7F010((__int64)&v44, v16);
        v13 = v40;
        v15 = (void **)((char *)v44 + (char *)&v47 - (char *)v14);
        v17 = (unsigned __int64)&v44[2 * (unsigned int)v45];
      }
    }
    *(_DWORD *)(v17 + 8) = *((_DWORD *)v15 + 2);
    *(_QWORD *)v17 = *v15;
    *((_DWORD *)v15 + 2) = 0;
    LODWORD(v45) = v45 + 1;
    v2 = *(_QWORD *)(v13 + 32);
  }
  if ( (_BYTE)v4 == 4 )
  {
    v31 = sub_A72040(*(_QWORD **)(*a1 + 8), v2);
    v32 = v31;
    if ( !v31 || *(_BYTE *)(v31 + 16) != 4 )
      BUG();
    v33 = j__strlen("dependent-length");
    v37 = sub_C00A40(*(_QWORD *)(v32 + 40), v2, v34, v35, v36);
    sub_E78FA0((__int64)&v47, *a1, v37, "dependent-length", v33);
    v38 = sub_EEC8C0(*(_QWORD *)(v32 + 40));
    v43 = 1;
    v42 = v38;
    sub_AEC610((__int64 *)&v47, &v42);
    sub_AEA040((__int64)&v47);
    v39 = v44;
    v30 = &v44[2 * (unsigned int)v45];
    if ( v44 != v30 )
    {
      do
      {
        v30 -= 2;
        if ( *((_DWORD *)v30 + 2) > 0x40u && *v30 )
          operator delete[](*v30);
      }
      while ( v39 != v30 );
      goto LABEL_48;
    }
  }
  else
  {
    v23 = a1[1];
    v24 = *(_BYTE **)(v23 + 32);
    if ( (unsigned __int64)v24 >= *(_QWORD *)(v23 + 24) )
    {
      sub_227BA10(v23, 89);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v24 + 1;
      *v24 = 89;
    }
    sub_E79E60((__int64)a1, (void *)(unsigned int)v45);
    v25 = v44;
    v26 = &v44[2 * (unsigned int)v45];
    if ( v44 != v26 )
    {
      do
      {
        v28 = *((_DWORD *)v25 + 2);
        if ( v28 <= 0x40 )
        {
          v27 = (__int64)*v25;
        }
        else
        {
          v27 = -1;
          if ( v28 - (unsigned int)sub_2206780(v25) <= 0x40 )
            v27 = *(_QWORD *)*v25;
        }
        v25 += 2;
        sub_E79E60((__int64)a1, (void *)v27);
      }
      while ( v26 != v25 );
    }
    sub_E845E0(a1, v2, nullptr, 2);
    v29 = v44;
    v30 = &v44[2 * (unsigned int)v45];
    if ( v44 != v30 )
    {
      do
      {
        v30 -= 2;
        if ( *((_DWORD *)v30 + 2) > 0x40u && *v30 )
          operator delete[](*v30);
      }
      while ( v29 != v30 );
LABEL_48:
      v30 = v44;
    }
  }
  if ( v30 != (void **)v46 )
    free(v30);
}
