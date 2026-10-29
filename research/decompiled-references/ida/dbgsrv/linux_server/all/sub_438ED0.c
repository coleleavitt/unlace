/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438ED0
// Address: 0x0000000000438ED0

//----- (0000000000438ED0) ----------------------------------------------------
__int64 __fastcall sub_438ED0(_QWORD *a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v3; // rdx
  __int16 *v4; // rbx
  unsigned __int64 v7; // rsi
  int v8; // r13d
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v11; // eax
  int v12; // [rsp+0h] [rbp-58h]
  unsigned int v13; // [rsp+4h] [rbp-54h]
  unsigned __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1[1];
  v15[1] = __readfsqword(0x28u);
  v4 = (__int16 *)(*a1 + v3 - 2);
  if ( *v4 > 0 )
  {
    v7 = *a1 + v3 - 2;
    v15[0] = a1[3] + *a1;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v12 = sub_47FD50(v15, v7);
    if ( v12 > 0 )
    {
      while ( v15[0] < (unsigned __int64)v4 )
      {
        v10 += sub_47FD50(v15, (unsigned __int64)v4);
        v9 += sub_47FD50(v15, (unsigned __int64)v4);
        v13 = sub_47FD50(v15, (unsigned __int64)v4);
        v11 = sub_47FD50(v15, (unsigned __int64)v4);
        if ( a2 >= v10 && a2 < v9 )
        {
          a3[3] = v11;
          *a3 = v10;
          a3[1] = v9;
          a3[2] = v13;
          return 1;
        }
        if ( v12 == ++v8 )
          return 0;
      }
    }
  }
  return 0;
}
