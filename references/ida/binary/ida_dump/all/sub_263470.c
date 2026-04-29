__int64 __fastcall sub_263470(__int64 *a1, char *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v7; // eax
  size_t v8; // r9
  char *v9; // r8
  char v10; // r15
  __int64 v11; // r14
  size_t v12; // r10
  __int64 v13; // rsi
  size_t v14; // rdx
  unsigned int v15; // ebx
  char *v17; // r8
  __int64 v18; // rax
  size_t v19; // rax
  size_t v20; // [rsp+8h] [rbp-108h]
  size_t v21; // [rsp+10h] [rbp-100h]
  char *v22; // [rsp+18h] [rbp-F8h]
  size_t v23; // [rsp+20h] [rbp-F0h]
  char *v24; // [rsp+20h] [rbp-F0h]
  __int64 tinfo_property; // [rsp+38h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-D0h] BYREF
  char *s; // [rsp+50h] [rbp-C0h]
  __int128 v29; // [rsp+58h] [rbp-B8h]
  __int64 v30; // [rsp+68h] [rbp-A8h]
  __int128 v31; // [rsp+70h] [rbp-A0h]
  __int128 v32; // [rsp+80h] [rbp-90h]
  __int64 v33; // [rsp+B0h] [rbp-60h]
  int v34; // [rsp+B8h] [rbp-58h]
  __int64 v35; // [rsp+C0h] [rbp-50h]
  char v36; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v37; // [rsp+D8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v36 = 0;
  tinfo_property = get_tinfo_property();
  s = nullptr;
  v30 = 0;
  v33 = 1;
  v34 = -1;
  v35 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v7 = sub_263270(&v27, (__int64)&tinfo_property, a4, a5);
  if ( !v7 )
  {
    v15 = 0;
    goto LABEL_12;
  }
  if ( v7 != 1 )
  {
    v8 = 1;
    v9 = "?";
    v10 = 18;
    if ( a1 )
    {
LABEL_4:
      v11 = a1[1];
      v12 = v8;
      if ( v11 )
        v12 = --v11 + v8;
      v13 = *a1;
      v14 = v12 + 1;
      if ( a1[2] < v12 + 1 )
      {
        v20 = v12;
        v21 = v8;
        v22 = v9;
        v23 = v12 + 1;
        v18 = qvector_reserve();
        *a1 = v18;
        v12 = v20;
        v13 = v18;
        v8 = v21;
        v9 = v22;
        v14 = v23;
      }
      a1[1] = v14;
      *(_BYTE *)(v13 + v12) = 0;
      memmove((void *)(v11 + *a1), v9, v8);
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( (v35 & 0x2000000000LL) != 0 )
  {
    if ( (unsigned __int64)v29 > 1 )
    {
LABEL_19:
      v17 = s;
      goto LABEL_23;
    }
    print_tinfo();
  }
  if ( (_QWORD)v29 )
    goto LABEL_19;
  v17 = (char *)s1;
LABEL_23:
  if ( a1 && v17 )
  {
    v24 = v17;
    v10 = 9;
    v19 = strlen(v17);
    v9 = v24;
    v8 = v19;
    goto LABEL_4;
  }
  v10 = 9;
LABEL_9:
  if ( a2 )
    *a2 = v10;
  v15 = 1;
LABEL_12:
  clear_tinfo_t();
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  if ( s )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v15;
}
