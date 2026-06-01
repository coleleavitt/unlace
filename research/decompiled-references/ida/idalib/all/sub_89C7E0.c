__int64 __fastcall sub_89C7E0(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 (__fastcall *a5)(_BYTE *, __int64, _BYTE *, __int64),
        __int64 a6)
{
  int v8; // r8d
  int v9; // ecx
  void *v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 i; // rax
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  int v16; // eax
  unsigned __int64 v17; // r15
  int *v18; // r11
  unsigned __int64 v19; // rax
  int *v20; // r11
  __int64 v21; // rax
  int *v22; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-70h]
  unsigned __int64 v24; // [rsp+10h] [rbp-68h]
  unsigned int v25; // [rsp+18h] [rbp-60h]
  int v26; // [rsp+1Ch] [rbp-5Ch]
  int *v27; // [rsp+20h] [rbp-58h]
  char v29; // [rsp+31h] [rbp-47h] BYREF
  _BYTE v30[6]; // [rsp+32h] [rbp-46h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v8 = *a4;
  if ( *a4 <= 3 )
  {
    if ( v8 > 0 )
    {
      v16 = a4[1];
      v9 = 0;
      if ( !v16 )
      {
        v22 = a4;
        result = a5(a1, a2, a1, a3);
        if ( *v22 == 3 )
          *v22 = 1;
        return result;
      }
      goto LABEL_4;
    }
    return 0;
  }
  if ( v8 != 4 )
    return 0;
  v9 = 2;
  v8 = 1;
LABEL_4:
  v26 = v9;
  n = a2 - 1;
  v10 = a1 + 1;
  v24 = a3 - (a2 - 1);
  v11 = 1;
  v30[0] = *a1;
  v25 = v8;
  v27 = a4;
  for ( i = ((__int64 (__fastcall *)(_BYTE *, __int64, _BYTE *, __int64, _QWORD, __int64))a5)(
              v30,
              1,
              a1,
              1,
              (unsigned int)v8,
              a6);
        ;
        i = ((__int64 (__fastcall *)(_BYTE *, __int64, _BYTE *, unsigned __int64, _QWORD, __int64))a5)(
              v30,
              1,
              a1,
              v11,
              v25,
              a6) )
  {
    v14 = i;
    if ( i == -1 )
      return -1;
    if ( v11 >= i )
    {
      v17 = a2 - 1;
      if ( v26 )
      {
        v21 = ((__int64 (__fastcall *)(void *, size_t, _BYTE *, unsigned __int64, __int64, __int64))a5)(
                v10,
                n,
                &a1[i],
                a3 - i,
                2,
                a6);
        v20 = v27;
        v17 = v21;
        if ( v21 != -1 )
          goto LABEL_25;
        return -1;
      }
      memmove(&a1[i], v10, n);
      v18 = v27;
LABEL_18:
      *v18 = 0;
      goto LABEL_19;
    }
    if ( v24 < i )
      break;
    v11 = i;
    v10 = memmove(&a1[i], v10, n);
  }
  v17 = a2 - 1;
  v18 = v27;
  if ( !v26 )
    goto LABEL_18;
  v19 = ((__int64 (__fastcall *)(void *, size_t, char *, _QWORD, __int64, __int64))a5)(v10, n, &v29, 0, 2, a6);
  if ( v19 == -1 )
    return -1;
  v20 = v27;
  if ( n < v19 )
    v17 = v19;
LABEL_25:
  *v20 = 2;
LABEL_19:
  result = v17 + v14;
  if ( __CFADD__(v17, v14) )
    return -1;
  return result;
}
