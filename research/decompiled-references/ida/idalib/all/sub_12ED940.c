std::_V2 **__fastcall sub_12ED940(std::_V2 **a1, std::_V2 **a2, __int64 a3)
{
  std::_V2 *v3; // r13
  __int64 v4; // rax
  std::_V2 **v6; // rbx
  std::_V2 **v7; // r15
  std::_V2 *i; // rbp
  std::_V2 *v9; // rax
  std::_V2 *v11; // [rsp+20h] [rbp-58h] BYREF
  std::_V2 *v12; // [rsp+28h] [rbp-50h] BYREF
  std::_V2 *v13; // [rsp+30h] [rbp-48h] BYREF
  std::_V2 *v14[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v4 = *(_QWORD *)v3;
    *a2 = nullptr;
    if ( (*(unsigned __int8 (__fastcall **)(std::_V2 *, void *))(v4 + 48))(v3, &unk_2D0AA9B) )
    {
      v6 = *((std::_V2 ***)v3 + 1);
      v7 = *((std::_V2 ***)v3 + 2);
      for ( i = nullptr; v7 != v6; ++v6 )
      {
        while ( 1 )
        {
          v9 = *v6;
          *v6 = nullptr;
          v11 = v9;
          sub_12EB840(&v12, &v11, a3);
          v13 = i;
          sub_AEA4D0((__int64 *)v14, (__int64 *)&v13, (__int64 *)&v12);
          i = v14[0];
          if ( v13 )
            (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( v12 )
            (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( !v11 )
            break;
          ++v6;
          (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( v7 == v6 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *a1 = i;
      (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v14[0] = v3;
      sub_12EB840(a1, v14, a3);
      if ( v14[0] )
        (*(void (__fastcall **)(std::_V2 *))(*(_QWORD *)v14[0] + 8LL))(v14[0]);
    }
  }
  else
  {
    *a1 = nullptr;
  }
  return a1;
}
