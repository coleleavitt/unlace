__int64 __fastcall sub_25EBF0(__int64 *a1, char *a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rdi
  int v9; // eax
  size_t v10; // r9
  char *v11; // r8
  char v12; // r15
  __int64 v13; // r14
  size_t v14; // r10
  __int64 v15; // rsi
  size_t v16; // rdx
  unsigned int v17; // ebx
  char *v19; // r8
  __int64 v20; // rax
  size_t v21; // rax
  size_t v22; // [rsp+8h] [rbp-108h]
  size_t v23; // [rsp+10h] [rbp-100h]
  char *v24; // [rsp+18h] [rbp-F8h]
  size_t v25; // [rsp+20h] [rbp-F0h]
  char *v26; // [rsp+20h] [rbp-F0h]
  __int64 tinfo_property; // [rsp+38h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-D0h] BYREF
  char *s; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-B8h]
  __int64 v32; // [rsp+68h] [rbp-A8h]
  __int128 v33; // [rsp+70h] [rbp-A0h]
  _OWORD v34[3]; // [rsp+80h] [rbp-90h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-60h]
  int v36; // [rsp+B8h] [rbp-58h]
  __int64 v37; // [rsp+C0h] [rbp-50h]
  char v38; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v39; // [rsp+D8h] [rbp-38h]

  v7 = *a3;
  v39 = __readfsqword(0x28u);
  v38 = 0;
  tinfo_property = get_tinfo_property(v7, 10);
  s = nullptr;
  v32 = 0;
  v35 = 1;
  v36 = -1;
  v37 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v34[0] = 0;
  v9 = sub_25E9F0(&v29, &tinfo_property, a4, a5);
  if ( !v9 )
  {
    v17 = 0;
    goto LABEL_12;
  }
  if ( v9 != 1 )
  {
    v10 = 1;
    v11 = "?";
    v12 = 18;
    if ( a1 )
    {
LABEL_4:
      v13 = a1[1];
      v14 = v10;
      if ( v13 )
        v14 = --v13 + v10;
      v15 = *a1;
      v16 = v14 + 1;
      if ( a1[2] < v14 + 1 )
      {
        v22 = v14;
        v23 = v10;
        v24 = v11;
        v25 = v14 + 1;
        v20 = qvector_reserve(a1, v15, v16, 1);
        *a1 = v20;
        v14 = v22;
        v15 = v20;
        v10 = v23;
        v11 = v24;
        v16 = v25;
      }
      a1[1] = v16;
      *(_BYTE *)(v15 + v14) = 0;
      memmove((void *)(v13 + *a1), v11, v10);
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  if ( (v37 & 0x2000000000LL) != 0 )
  {
    if ( (unsigned __int64)v31 > 1 )
    {
LABEL_19:
      v19 = s;
      goto LABEL_23;
    }
    print_tinfo(&s, 0, 0, 0, 0, v34, 0, 0);
  }
  if ( (_QWORD)v31 )
    goto LABEL_19;
  v19 = (char *)s1;
LABEL_23:
  if ( a1 && v19 )
  {
    v26 = v19;
    v12 = 9;
    v21 = strlen(v19);
    v11 = v26;
    v10 = v21;
    goto LABEL_4;
  }
  v12 = 9;
LABEL_9:
  if ( a2 )
    *a2 = v12;
  v17 = 1;
LABEL_12:
  clear_tinfo_t(v34);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( s )
  {
    *(_QWORD *)&v31 = 0;
    qfree(s);
  }
  clear_tinfo_t(&tinfo_property);
  return v17;
}
