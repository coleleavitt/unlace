/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A0C8
// Address: 0x000000000043A0C8

//----- (000000000043A0C8) ----------------------------------------------------
__int64 __fastcall sub_43A0C8(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v6; // x0
  int v7; // w21
  const char *v9; // x0
  const char *v10; // x2
  __int64 v11; // x3
  int v12; // w4
  int v13; // w5
  int v14; // w6
  int v15; // w7
  double v16; // d0
  int v17; // w1
  unsigned __int64 v18; // x22
  int v19; // w2
  const char *v20; // x0
  const char *v21; // x22
  size_t v22; // x0
  __int64 v23; // x21
  size_t v24; // x25
  __int64 v25; // x21
  size_t v26; // x24
  _BYTE *v27; // x0
  __int64 *v28; // x0
  unsigned __int64 v29; // x24
  unsigned __int64 v30; // x25
  _BYTE *v31; // x0
  unsigned __int64 v32; // x22
  _BYTE *v33; // x0
  int v34; // [xsp+4Ch] [xbp-24h] BYREF
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v36; // [xsp+58h] [xbp-18h]
  __int64 v37; // [xsp+60h] [xbp-10h]
  __int64 v38; // [xsp+68h] [xbp-8h]

  if ( a3 )
  {
    v6 = *(_BYTE **)a3;
    if ( *(_QWORD *)a3 )
    {
      *(_QWORD *)(a3 + 8) = 0;
      j__free(v6);
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 16) = 0;
    }
    v7 = sub_4869A0();
    if ( v7 )
    {
      v9 = (const char *)sub_451480(a1, &v34, nullptr, 0);
      v17 = v34;
      if ( v34 != -1 )
      {
        if ( v9 )
        {
          sub_40CD68(a3, "%s", v9);
          v17 = v34;
        }
        v18 = *(_QWORD *)(a3 + 8);
        if ( v17 )
        {
          if ( v18 > 1 )
          {
            v33 = *(_BYTE **)a3;
            if ( v18 + 1 > *(_QWORD *)(a3 + 16) )
            {
              v33 = sub_491288(a3, *(void **)a3, v18 + 1, 1u);
              *(_QWORD *)a3 = v33;
            }
            *(_QWORD *)(a3 + 8) = v18 + 1;
            v33[v18 - 1] = 44;
            *(_BYTE *)(*(_QWORD *)a3 + v18) = 0;
            v19 = v34;
          }
          else
          {
            v19 = v17 - 1;
            v34 = v17 - 1;
          }
          sub_42D148(a3, "%d", v19);
          v18 = *(_QWORD *)(a3 + 8);
        }
        if ( v18 > 1 )
        {
          v29 = v18 + 2;
          v30 = v18 - 1;
          v31 = *(_BYTE **)a3;
          v32 = v18 + 1;
          if ( v29 > *(_QWORD *)(a3 + 16) )
          {
            v31 = sub_491288(a3, *(void **)a3, v29, 1u);
            *(_QWORD *)a3 = v31;
          }
          *(_QWORD *)(a3 + 8) = v29;
          v10 = "S1C33";
          v31[v32] = 0;
          *(_WORD *)(*(_QWORD *)a3 + v30) = *(_WORD *)": ";
        }
      }
      if ( v7 == 47 )
      {
        ptr = nullptr;
        v36 = 0;
        v37 = 0;
        v28 = sub_452F08((__int64)&ptr, a2, v16, (__int64)v10, v11, v12, v13, v14, v15);
        sub_486A58(0, (char *)v28);
        if ( ptr )
        {
          v36 = 0;
          j__free(ptr);
        }
      }
      v20 = sub_493840(v7);
      v21 = v20;
      if ( v20 )
      {
        v22 = strlen(v20);
        v23 = *(_QWORD *)(a3 + 8);
        v24 = v22;
        if ( v23 )
        {
          v25 = v23 - 1;
          v26 = v22 + v25;
        }
        else
        {
          v26 = v22;
          v25 = 0;
        }
        v27 = *(_BYTE **)a3;
        if ( v26 + 1 > *(_QWORD *)(a3 + 16) )
        {
          v27 = sub_491288(a3, *(void **)a3, v26 + 1, 1u);
          *(_QWORD *)a3 = v27;
        }
        *(_QWORD *)(a3 + 8) = v26 + 1;
        v27[v26] = 0;
        memmove((void *)(*(_QWORD *)a3 + v25), v21, v24);
      }
    }
  }
  return v38 ^ _stack_chk_guard;
}
// 43A250: variable 'v16' is possibly undefined
// 43A250: variable 'v10' is possibly undefined
// 43A250: variable 'v11' is possibly undefined
// 43A250: variable 'v12' is possibly undefined
// 43A250: variable 'v13' is possibly undefined
// 43A250: variable 'v14' is possibly undefined
// 43A250: variable 'v15' is possibly undefined
