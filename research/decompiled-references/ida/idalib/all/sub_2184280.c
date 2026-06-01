__int64 __fastcall sub_2184280(__int64 a1, __int64 *a2)
{
  unsigned __int16 v2; // ax
  const char *v4; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 v7; // rdx

  v2 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 552))(a2);
  if ( v2 == 190 )
  {
    v4 = sub_2183E50(a2);
    *(_BYTE *)(a1 + 16) = 1;
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    return a1;
  }
  if ( v2 <= 0xBEu )
  {
    if ( (unsigned __int16)(v2 - 20) <= 1u )
    {
      *(_QWORD *)(a1 + 8) = 6;
      *(_QWORD *)a1 = "future";
      *(_BYTE *)(a1 + 16) = 1;
      return a1;
    }
    goto LABEL_9;
  }
  if ( v2 != 224 )
  {
    if ( v2 == 247 )
    {
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)a1 = "v4";
      *(_BYTE *)(a1 + 16) = 1;
      return a1;
    }
LABEL_9:
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  v6 = sub_21835B0((__int64)a2);
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  return a1;
}
