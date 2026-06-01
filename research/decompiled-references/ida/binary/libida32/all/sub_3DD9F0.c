__int64 __fastcall sub_3DD9F0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
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
  unsigned int *v14; // rax
  unsigned int v15; // ebp
  unsigned int *v16; // r14
  unsigned int v17; // edx
  unsigned int head; // eax
  unsigned int v20; // [rsp+0h] [rbp-48h] BYREF
  char v21; // [rsp+4h] [rbp-44h]
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v14 = (unsigned int *)sub_5AFCE0(a1);
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
        sub_3BCF60((__int64)a1, head);
        return sub_5B2CC0((int)a1, a7, a8, a9, a10, a11, a12, a13);
      }
      while ( 1 )
      {
        v20 = -1;
        v21 = 0;
        sub_3DC190(a1, (__int64)&v20, v15);
        v17 = v20;
        if ( v20 != -1 )
          break;
LABEL_10:
        v15 = sub_3BC980(a1, v15, a2, (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_39AFB0, nullptr);
        if ( v15 >= a2 )
        {
          v15 = *v16;
          goto LABEL_12;
        }
      }
      while ( (unsigned __int8)(v21 - 16) <= 1u || v17 < a3 || v17 >= v16[1] )
      {
        sub_3DC350(a1, &v20, v15);
        v17 = v20;
        if ( v20 == -1 )
          goto LABEL_10;
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}

