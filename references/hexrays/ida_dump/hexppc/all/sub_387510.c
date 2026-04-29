__int64 __fastcall sub_387510(__int64 a1, unsigned __int64 a2, int a3, double a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int *v7; // rax
  int *v8; // r8
  int v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  unsigned __int64 v12; // [rsp+38h] [rbp-10h]

  result = 0;
  v6 = *(_QWORD *)(a1 + 32);
  v12 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(v6 + 136) )
    return result;
  v7 = &v10;
  v8 = &v9;
  v9 = 0;
  if ( (a3 & 1) == 0 )
    v7 = nullptr;
  v10 = 0;
  if ( (a3 & 0x1E) == 0 )
    v8 = nullptr;
  sub_386610(
    v6,
    *(const char **)(*(_QWORD *)(v6 + 128) + 32 * a2),
    0,
    (int)a2 >= *(_DWORD *)(v6 + 152),
    v8,
    0,
    a4,
    (__int64)v7);
  if ( v9 == 3 )
  {
    LODWORD(result) = a3 & 0xFFFFFFF9;
    goto LABEL_9;
  }
  if ( v9 == 4 )
  {
    LODWORD(result) = a3 & 0xFFFFFFEF;
    goto LABEL_9;
  }
  result = a3 & 0xFFFFFFE9;
  if ( v9 != 2 )
  {
LABEL_9:
    result = (unsigned int)result & 0xFFFFFFF7;
    if ( v10 != 4 )
      return (unsigned int)result & 0xFFFFFFFE;
    goto LABEL_15;
  }
  if ( v10 != 4 )
    return (unsigned int)result & 0xFFFFFFFE;
LABEL_15:
  if ( v11 == -1 )
    return (unsigned int)result & 0xFFFFFFFE;
  return result;
}
