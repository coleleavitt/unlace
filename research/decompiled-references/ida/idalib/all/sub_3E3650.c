__int64 __fastcall sub_3E3650(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13)
{
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 *v16; // r14
  unsigned __int64 v17; // rdx
  unsigned __int64 head; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-58h] BYREF
  char v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v14 = (unsigned __int64 *)sub_5CAA10(a1);
  if ( v14 )
  {
    v15 = *v14;
    v16 = v14;
    if ( a3 >= *v14 && a3 < v14[1] )
    {
      if ( v15 >= a2 )
      {
LABEL_12:
        head = prev_head(a2, v15);
        sub_3C1F00(a1, head);
        return sub_5CDC30((int)a1, a7, a8, a9, a10, a11, a12, a13);
      }
      while ( 1 )
      {
        v21 = 0;
        v20 = -1;
        sub_3E1CA0(a1, (__int64)&v20, v15);
        v17 = v20;
        if ( v20 != -1 )
          break;
LABEL_10:
        v15 = sub_3C1900(a1, v15, a2, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr);
        if ( v15 >= a2 )
        {
          v15 = *v16;
          goto LABEL_12;
        }
      }
      while ( (unsigned __int8)(v21 - 16) <= 1u || v17 < a3 || v17 >= v16[1] )
      {
        sub_3E1E80(a1, &v20, v15);
        v17 = v20;
        if ( v20 == -1 )
          goto LABEL_10;
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}
