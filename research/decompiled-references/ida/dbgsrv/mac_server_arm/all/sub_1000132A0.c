/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000132A0
// Address: 0x00000001000132A0

//----- (00000001000132A0) ----------------------------------------------------
void __fastcall sub_1000132A0(__int64 a1, char *__s)
{
  off_t v3; // x20
  __int64 v4; // x0
  size_t v6; // x21
  void *v7; // x0
  void *v8; // x1
  size_t v9; // x22
  const char *v10; // x0
  __int64 v11; // x0
  int v12; // w21
  void *v13; // x0
  __int64 v14; // x9
  _QWORD *v15; // x0
  __int64 v16; // x1
  void *v17; // [xsp+10h] [xbp-250h] BYREF
  size_t v18; // [xsp+18h] [xbp-248h]
  unsigned __int64 v19; // [xsp+20h] [xbp-240h]
  char __s1[4]; // [xsp+28h] [xbp-238h] BYREF
  unsigned int v21; // [xsp+2Ch] [xbp-234h]
  unsigned int v22; // [xsp+30h] [xbp-230h]
  unsigned int v23; // [xsp+34h] [xbp-22Ch]
  unsigned int v24; // [xsp+38h] [xbp-228h]
  unsigned int v25; // [xsp+3Ch] [xbp-224h]
  off_t v26; // [xsp+70h] [xbp-1F0h]

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 && *(_QWORD *)(a1 + 96) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 752) = v4;
    goto LABEL_23;
  }
  if ( !__s )
    return;
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v6 = strlen(__s);
  v7 = nullptr;
  if ( v6 != -1 )
  {
    v7 = qvector_reserve(&v17, nullptr, v6 + 1, 1u);
    v17 = v7;
  }
  v18 = v6 + 1;
  memmove(v7, __s, v6);
  *((_BYTE *)v17 + v6) = 0;
  v8 = v17;
  if ( v18 )
    v9 = v18 - 1;
  else
    v9 = 0;
  if ( v19 < v9 + 9 )
  {
    v8 = qvector_reserve(&v17, v17, v9 + 9, 1u);
    v17 = v8;
  }
  v18 = v9 + 9;
  *((_BYTE *)v8 + v9 + 8) = 0;
  *(_QWORD *)((char *)v17 + v9) = 0x736C6F626D79732ELL;
  if ( v18 )
    v10 = (const char *)v17;
  else
    v10 = &byte_100075A30;
  v11 = open_linput(v10, 0);
  *(_QWORD *)(a1 + 752) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 775) = 1;
    if ( qlread(v11, __s1, 0x200u) == 512 )
    {
      if ( !strncmp(__s1, (const char *)(a1 + 16), 0x10u) )
      {
        v12 = 1;
        v3 = v26;
        v13 = v17;
        if ( !v17 )
          goto LABEL_21;
        goto LABEL_20;
      }
      sub_100000AA0();
    }
  }
  v12 = 0;
  v13 = v17;
  if ( v17 )
  {
LABEL_20:
    v18 = 0;
    qfree(v13);
  }
LABEL_21:
  if ( !v12 )
    return;
  v4 = *(_QWORD *)(a1 + 752);
LABEL_23:
  if ( qlseek(v4, v3, 0) == v3 && qlread(*(_QWORD *)(a1 + 752), __s1, 0x18u) == 24 )
  {
    v14 = v21;
    *(_QWORD *)(a1 + 808) = v3 + *(unsigned int *)__s1;
    *(_QWORD *)(a1 + 816) = v14;
    v15 = sub_1000115C8(*(_QWORD *)(a1 + 752), v3 + v22, (char *)v23, 1);
    *(_QWORD *)(a1 + 824) = v15;
    *(_QWORD *)(a1 + 776) = v15;
    v16 = *(_QWORD *)(a1 + 752);
    if ( *(_DWORD *)(a1 + 32) < 0x188u )
      sub_1000147F0(a1 + 704, v16, v3 + v24, v25, -1, (__int64)"local symbols size", 0);
    else
      sub_100014558(a1 + 728, v16, v3 + v24, v25, -1, (__int64)"local symbols size", 0);
  }
}
// 100075A30: using guessed type char byte_100075A30;
