/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A5F0
// Address: 0x000000000009A5F0

//----- (000000000009A5F0) ----------------------------------------------------
__int64 __fastcall sub_9A5F0(__int64 a1, _QWORD *a2, const char **a3, int a4)
{
  int v4; // r12d
  __int64 v7; // rax
  const char *v8; // r14
  signed int v9; // r15d
  const char **v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  const char **v15; // rbx
  const char *v16; // r13
  char v17; // al
  unsigned int v18; // ecx
  const char *v19; // r12
  int v20; // eax
  __int64 v21; // r12
  char v22; // bl
  _BYTE *v23; // rax
  size_t v24; // rax
  const char **v25; // r14
  _BYTE *v26; // rax
  int v27; // ebx
  bool v28; // zf
  unsigned int v29; // ebx
  int v31; // [rsp+4h] [rbp-94h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  _QWORD *v33; // [rsp+18h] [rbp-80h]
  void *v34[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+30h] [rbp-68h]
  _BYTE v36[5]; // [rsp+43h] [rbp-55h] BYREF
  void *ptr; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v38[9]; // [rsp+50h] [rbp-48h] BYREF

  v38[2] = __readfsqword(0x28u);
  if ( a4 )
  {
    v4 = a4;
    *(_OWORD *)v34 = 0;
    v35 = 0;
    while ( v4 > 0 )
    {
      v34[1] = nullptr;
      v7 = 0;
      v8 = &byte_EB522;
      v9 = 0;
      v31 = v4;
      do
      {
        if ( v9 >= v4 )
          break;
        v10 = a3;
        v11 = *a2 - v7;
        v12 = v7 - *a2;
        if ( v12 < 1 )
          v12 = *a2 - v7;
        v13 = pack_dq(&ptr, (unsigned __int64)v38 + 2, v12 + 1);
        sub_56350((__int64)v34, &ptr, v13 - (_BYTE *)&ptr);
        v14 = pack_dd(v36, (unsigned __int64)&ptr, v11 >> 63);
        sub_56350((__int64)v34, v36, v14 - v36);
        v33 = a2;
        v32 = *a2;
        v15 = v10;
        v16 = *v10;
        v17 = **v10;
        v18 = 0;
        v19 = *v10;
        if ( v17 && v17 == *v8 )
        {
          v20 = 1;
          do
          {
            v18 = v20;
            v21 = v20;
            v22 = v16[v20];
            if ( !v22 )
              break;
            ++v20;
          }
          while ( v22 == v8[v21] );
          v19 = &v16[v21];
          v15 = v10;
        }
        v23 = pack_dd(v36, (unsigned __int64)&ptr, v18);
        sub_56350((__int64)v34, v36, v23 - v36);
        if ( !v19 )
          v19 = &byte_EB522;
        v24 = strlen(v19);
        sub_56350((__int64)v34, v19, v24 + 1);
        a3 = v15 + 1;
        ++v9;
        v8 = v16;
        a2 = v33 + 1;
        v4 = v31;
        v7 = v32;
      }
      while ( v34[1] < (char *)&jpt_4E654[1004] + 1 );
      v25 = a3;
      sub_AB1F0((__int64)&ptr, 50);
      v26 = pack_dd(v36, (unsigned __int64)&ptr, v9);
      sub_56350((__int64)&ptr, v36, v26 - v36);
      sub_56350((__int64)&ptr, v34[0], (size_t)v34[1]);
      v27 = sub_A50B0(a1 + 192, (__int64)&ptr, -1, 0);
      if ( ptr )
      {
        v38[0] = 0;
        qfree(ptr);
        ptr = nullptr;
        v38[1] = 0;
      }
      v4 -= v9;
      v28 = v9 == v27;
      a3 = v25;
      if ( !v28 )
      {
        v29 = 1;
        goto LABEL_23;
      }
    }
    v29 = 0;
LABEL_23:
    if ( v34[0] )
    {
      v34[1] = nullptr;
      qfree(v34[0]);
      v34[0] = nullptr;
      v35 = 0;
    }
  }
  else
  {
    return 0;
  }
  return v29;
}
// FF050: using guessed type _UNKNOWN *__ptr32 jpt_4E654[1033];
