/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FC70
// Address: 0x000000010005FC70

//----- (000000010005FC70) ----------------------------------------------------
void __fastcall sub_10005FC70(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int128 v4; // xmm0
  size_t v5; // r12
  size_t v6; // r12
  __int64 v7; // r12
  __int128 v8; // [rsp+0h] [rbp-80h] BYREF
  size_t v9; // [rsp+10h] [rbp-70h]
  __int128 v10; // [rsp+18h] [rbp-68h]
  size_t v11; // [rsp+28h] [rbp-58h]
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  int v14; // [rsp+48h] [rbp-38h]

  if ( a1[1] <= a2 )
  {
    if ( a1[1] < a2 )
    {
      if ( *a1 > a3 || 80 * a1[2] + *a1 <= a3 )
      {
        sub_10005FEC0((__int64)a1, a2, a3);
      }
      else
      {
        v4 = 0;
        v8 = 0;
        v9 = 0;
        v5 = *(_QWORD *)(a3 + 8);
        if ( v5 )
        {
          *(_QWORD *)&v8 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
          v9 = v5;
          memcpy((void *)v8, *(const void **)a3, v5);
          v4 = 0;
          *((_QWORD *)&v8 + 1) = v5;
        }
        v10 = v4;
        v11 = 0;
        v6 = *(_QWORD *)(a3 + 32);
        if ( v6 )
        {
          *(_QWORD *)&v10 = qalloc_or_throw(*(_QWORD *)(a3 + 32));
          v11 = v6;
          memcpy((void *)v10, *(const void **)(a3 + 24), v6);
          *((_QWORD *)&v10 + 1) = v6;
        }
        v12 = 0;
        v13 = 0;
        v7 = *(_QWORD *)(a3 + 56);
        if ( v7 )
        {
          *(_QWORD *)&v12 = qalloc_or_throw(16 * v7);
          v13 = v7;
          memcpy((void *)v12, *(const void **)(a3 + 48), 16 * v7);
          *((_QWORD *)&v12 + 1) = v7;
        }
        v14 = *(_DWORD *)(a3 + 72);
        sub_10005FEC0((__int64)a1, a2, (__int64)&v8);
        if ( (_QWORD)v12 )
        {
          *((_QWORD *)&v12 + 1) = 0;
          qfree((void *)v12);
          *(_QWORD *)&v12 = 0;
          v13 = 0;
        }
        if ( (_QWORD)v10 )
        {
          *((_QWORD *)&v10 + 1) = 0;
          qfree((void *)v10);
          *(_QWORD *)&v10 = 0;
          v11 = 0;
        }
        if ( (_QWORD)v8 )
        {
          *((_QWORD *)&v8 + 1) = 0;
          qfree((void *)v8);
        }
      }
    }
  }
  else
  {
    sub_10005EB30(a1, a2);
  }
}
