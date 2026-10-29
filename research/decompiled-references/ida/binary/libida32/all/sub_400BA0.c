__int64 __fastcall sub_400BA0(_QWORD *a1, _BYTE *a2, unsigned int a3, char a4, int *a5)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rax
  int v9; // ebp
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 result; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  unsigned int tinfo_tid; // eax
  unsigned int v19; // [rsp+8h] [rbp-F0h]
  unsigned int v20; // [rsp+8h] [rbp-F0h]
  int v21; // [rsp+8h] [rbp-F0h]
  int v22; // [rsp+18h] [rbp-E0h] BYREF
  int v23; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v24; // [rsp+20h] [rbp-D8h] BYREF
  __int64 tinfo_property; // [rsp+28h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+30h] [rbp-C8h] BYREF
  void *v27; // [rsp+40h] [rbp-B8h]
  __int128 v28; // [rsp+48h] [rbp-B0h]
  void *ptr; // [rsp+58h] [rbp-A0h]
  __int128 v30; // [rsp+60h] [rbp-98h]
  __int128 v31; // [rsp+70h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-74h]
  __int64 v33; // [rsp+90h] [rbp-68h]
  int v34; // [rsp+98h] [rbp-60h]
  __int64 v35; // [rsp+A0h] [rbp-58h]
  char v36; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-40h]

  v6 = a4 & 0xF;
  v37 = __readfsqword(0x28u);
  v22 = sub_3B90A0(a1, a3);
  v8 = -32770;
  if ( _bittest64(&v8, v6) )
    goto LABEL_2;
  if ( (unsigned __int8)sub_79BBD0(&v22, *a1, &v23, 11, 65) )
  {
LABEL_3:
    v9 = v23 - 1;
    if ( a5 )
      v10 = sub_3B90A0(a1, *a5);
    else
      v10 = sub_6180E0(*a1);
    v11 = (v9 - v10) & 0xFF000000;
    if ( a2 )
      *a2 = HIBYTE(v11);
    v12 = sub_3B9110(a1, v9 - v11);
    return sub_699790(a1, v12);
  }
  if ( (_DWORD)v6 )
  {
LABEL_2:
    if ( !(unsigned __int8)sub_79BBD0(&v22, *a1, &v23, 12, 65) )
      return 0xFFFFFFFFLL;
    goto LABEL_3;
  }
  v24 = 0;
  if ( !a5 )
  {
    a5 = (int *)&v24;
    sub_6141A0(*a1, 26, &v24, 8);
  }
  v27 = nullptr;
  ptr = nullptr;
  v33 = 1;
  v34 = -1;
  v35 = 0;
  v36 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  if ( a3 < *a5 || a3 >= a5[1] || sub_69D720(a1, 0, &v26, a3) == -1 )
    goto LABEL_19;
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(v31, 289);
  if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 0x2D )
  {
    tinfo_tid = get_tinfo_tid(&tinfo_property, 0);
    goto LABEL_27;
  }
  if ( (BYTE8(v31) & 0xF) == 8 )
  {
    tinfo_tid = sub_69AA70((_DWORD)a1, a1[1], v32, v14, v15, v16);
LABEL_27:
    if ( tinfo_tid != -1 )
    {
      if ( a2 )
        *a2 = 0;
      v21 = sub_699790(a1, tinfo_tid);
      clear_tinfo_t(&tinfo_property);
      v17 = v21;
      goto LABEL_20;
    }
  }
  clear_tinfo_t(&tinfo_property);
LABEL_19:
  v17 = -1;
LABEL_20:
  v19 = v17;
  clear_tinfo_t(&v31);
  result = v19;
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
    result = v19;
  }
  if ( v27 )
  {
    v20 = result;
    *(_QWORD *)&v28 = 0;
    qfree(v27);
    return v20;
  }
  return result;
}

