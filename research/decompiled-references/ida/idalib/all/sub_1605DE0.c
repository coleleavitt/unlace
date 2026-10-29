void __fastcall sub_1605DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *v9; // rbx
  char *v10; // r15
  signed __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // rax
  char v14; // dl
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+14h] [rbp-1A4h]
  char *v26; // [rsp+38h] [rbp-180h]
  __int64 v27; // [rsp+38h] [rbp-180h]
  _BYTE *v28; // [rsp+38h] [rbp-180h]
  signed __int64 v29; // [rsp+40h] [rbp-178h]
  __int64 v30; // [rsp+40h] [rbp-178h]
  signed __int64 v31; // [rsp+40h] [rbp-178h]
  __int64 v32; // [rsp+48h] [rbp-170h]
  __int64 v33; // [rsp+58h] [rbp-160h] BYREF
  _BYTE *v34; // [rsp+60h] [rbp-158h] BYREF
  __int64 v35; // [rsp+68h] [rbp-150h]
  _QWORD *v36; // [rsp+70h] [rbp-148h]
  __int64 v37; // [rsp+78h] [rbp-140h]
  _QWORD v38[2]; // [rsp+80h] [rbp-138h] BYREF
  _QWORD *v39; // [rsp+90h] [rbp-128h]
  __int64 v40; // [rsp+98h] [rbp-120h]
  char *v41; // [rsp+A0h] [rbp-118h] BYREF
  int v42; // [rsp+A8h] [rbp-110h]
  __int64 v43; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v44[16]; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+110h] [rbp-A8h] BYREF
  char v47; // [rsp+168h] [rbp-50h]
  unsigned int v48; // [rsp+170h] [rbp-48h]
  char v49; // [rsp+174h] [rbp-44h]

  v25 = a4;
  sub_15F0AB0(&v34, a3, a3, a4, a5);
  sub_15F0AB0(v38, a2, v6, v7, v8);
  if ( v35 != v38[1] )
    goto LABEL_2;
  if ( v34 != &v34[v35] )
  {
    if ( *(_BYTE *)v38[0] != *v34 )
      goto LABEL_2;
    v13 = 1;
    while ( v35 != v13 )
    {
      v14 = v34[v13++];
      if ( v14 != *(_BYTE *)(v38[0] + v13 - 1) )
        goto LABEL_2;
    }
  }
  if ( v37 == v40 )
  {
    v15 = v36;
    v16 = &v36[v37];
    if ( v36 == v16 )
      return;
    v17 = v39;
    if ( *v39 == *v36 )
    {
      do
      {
        ++v15;
        ++v17;
        if ( v16 == v15 )
          return;
      }
      while ( *v15 == *v17 );
    }
  }
LABEL_2:
  sub_19EC410(&v41, &v34, v38);
  v9 = v41;
  v10 = &v41[56 * v42];
  if ( v41 != v10 )
  {
    while ( 1 )
    {
      while ( !(unsigned __int8)sub_19EC880(v9, a3, &v34, a2, v38) )
      {
        v9 += 56;
        if ( v10 == v9 )
          goto LABEL_11;
      }
      sub_168B9F0(v44, a1 + 8, v25, 7061, 0);
      if ( v9[24] )
      {
        v12 = sub_F5ED10(v9 + 8);
        if ( !v47 )
          goto LABEL_9;
      }
      else
      {
        if ( !v9[48] )
          abort();
        v12 = sub_F5ED10(v9 + 32);
        if ( !v47 )
        {
LABEL_9:
          if ( v49 )
          {
            v29 = v11;
            v26 = v12;
            v18 = sub_168B9E0(v44);
            v20 = (__int64)v26;
            v21 = v29;
            v22 = v18;
            v23 = v45;
            if ( v45 )
            {
              v32 = v29;
              v30 = (__int64)v26;
              v27 = v22;
              v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
              v21 = v32;
              v20 = v30;
              v22 = v27;
            }
            v31 = v21;
            v28 = (_BYTE *)v20;
            v33 = v23;
            v24 = sub_1587BC0(v22, &v33, v21, v20, v22, v19);
            sub_AEC220((unsigned __int8 **)(*v24 + 32LL * v48 + 8), v28, v31);
          }
          goto LABEL_10;
        }
      }
      sub_AEC220(&v46, v12, v11);
LABEL_10:
      v9 += 56;
      sub_15F7200(v44);
      if ( v10 == v9 )
      {
LABEL_11:
        v10 = v41;
        break;
      }
    }
  }
  if ( v10 != (char *)&v43 )
    free(v10);
}
