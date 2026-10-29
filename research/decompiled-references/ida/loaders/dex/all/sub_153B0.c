__int64 __fastcall sub_153B0(__int64 a1, int a2, __int64 a3, int a4, double a5)
{
  int v7; // ebx
  int v8; // r14d
  __int64 v9; // rsi
  int v10; // ebx
  unsigned __int64 v11; // rax
  int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v14[7]; // [rsp+10h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( a2 >= 0 )
    sub_7150(a3, 1u, (__int64)"Encoded array 0x%x", a2);
  v14[0] = a3;
  if ( !sub_7BA0(&v13, v14, 0) )
    return -1;
  v7 = sub_5F10(a3, v14[0]);
  if ( v7 <= 0 )
    return -1;
  v8 = v13;
  sub_13370(a3, (__int64)"Size of array 0x%x (%u)", v13, v13);
  v9 = a3 + v7;
  if ( v8 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_14A50(a1, v9, v10, a4);
      v9 = v11;
      if ( v11 == -1 )
        break;
      if ( v11 < *(_QWORD *)(a1 + 168) || v11 >= *(_QWORD *)(a1 + 176) )
      {
        sub_5860((__int64)"dex: failed to format array at %a\n", a5);
        return -1;
      }
      if ( v8 == ++v10 )
        return v9;
    }
    return -1;
  }
  return v9;
}

