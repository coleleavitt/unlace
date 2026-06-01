unsigned __int64 __fastcall sub_109940(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rax
  char *v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // rdx
  __int64 v9; // rax
  char *v10; // rcx

  result = sub_109850(a1);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    if ( a2 && a3 )
    {
      if ( a3 > 7 && *a2 == -332356553 )
      {
        *(_DWORD *)(a1 + 30200) = a2[1];
        v7 = sub_1095A0(a1 + 32, (__int64)a2, a3);
        result = -30;
        if ( v7 <= 0xFFFFFFFFFFFFFF88LL )
        {
          v8 = (char *)a2 + v7;
          *(_QWORD *)(a1 + 30000) = 0x100000001LL;
          v9 = *(_QWORD *)(a1 + 29888);
          *(_QWORD *)(a1 + 29888) = (char *)a2 + a3;
          *(_QWORD *)(a1 + 29912) = v9;
          v10 = &v8[-(v9 - *(_QWORD *)(a1 + 29896))];
          *(_QWORD *)(a1 + 29896) = v8;
          *(_QWORD *)(a1 + 29904) = v10;
          return 0;
        }
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 29888);
        *(_QWORD *)(a1 + 29912) = v5;
        v6 = (char *)a2 - (v5 - *(_QWORD *)(a1 + 29896));
        *(_QWORD *)(a1 + 29896) = a2;
        result = 0;
        *(_QWORD *)(a1 + 29904) = v6;
        *(_QWORD *)(a1 + 29888) = (char *)a2 + a3;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

