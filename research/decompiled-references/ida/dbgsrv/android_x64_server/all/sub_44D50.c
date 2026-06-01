/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D50
// Address: 0x0000000000044D50

//----- (0000000000044D50) ----------------------------------------------------
__int64 __fastcall sub_44D50(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 **v6; // rbp
  __int64 **v7; // rbx
  bool v8; // cf
  __int64 *v9; // rax
  unsigned int v10; // r15d
  __int64 *v11; // rax
  __int64 v12; // rcx

  if ( a4
    && (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
         a1,
         a3,
         a4,
         a5,
         0) == a5 )
  {
    v6 = *(__int64 ***)(a1 + 1200);
    if ( v6 )
    {
      v7 = (__int64 **)(a1 + 1200);
      v8 = (unsigned __int64)v6[4] < a3;
      if ( (unsigned __int64)v6[4] <= a3 )
        goto LABEL_9;
      while ( 1 )
      {
        v9 = *v6;
        v7 = v6;
        if ( !*v6 )
          break;
        while ( 1 )
        {
          v6 = (__int64 **)v9;
          v8 = v9[4] < a3;
          if ( v9[4] > a3 )
            break;
LABEL_9:
          if ( v8 )
          {
            v7 = v6 + 1;
            v9 = v6[1];
            if ( v9 )
              continue;
          }
          goto LABEL_15;
        }
      }
    }
    else
    {
      v6 = (__int64 **)(a1 + 1200);
    }
    v7 = v6;
LABEL_15:
    v10 = 1;
    if ( !*v7 )
    {
      v11 = (__int64 *)operator new(0x28u);
      v11[4] = a3;
      *(_OWORD *)v11 = 0;
      v11[2] = (__int64)v6;
      *v7 = v11;
      v12 = **(_QWORD **)(a1 + 1192);
      if ( v12 )
      {
        *(_QWORD *)(a1 + 1192) = v12;
        v11 = *v7;
      }
      sub_4A450(*(__int64 **)(a1 + 1200), v11);
      ++*(_QWORD *)(a1 + 1208);
    }
  }
  else
  {
    return (unsigned __int8)sub_A78D0(a1, a3, a2);
  }
  return v10;
}
