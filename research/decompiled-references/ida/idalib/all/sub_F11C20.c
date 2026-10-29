void __fastcall sub_F11C20(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rax
  char *v8; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 i; // rbx
  char *v17; // rsi

  v7 = a2[6];
  if ( (v7 & 4) != 0 && (v8 = (char *)(v7 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
  {
    sub_F05430(a1, v8, a3, a4, a5, a6, a7);
  }
  else
  {
    sub_995540(*a1, "{");
    v13 = a2[2];
    v14 = (a2[3] - v13) >> 3;
    if ( (_DWORD)v14 )
    {
      v15 = (unsigned int)(v14 - 1);
      for ( i = 0; ; ++i )
      {
        v17 = *(char **)(v13 + 8 * i);
        if ( v17 )
        {
          sub_F05430(a1, v17, v14, v10, v11, v12, a7);
          if ( v15 == i )
            break;
        }
        else
        {
          sub_995540(*a1, "{}");
          if ( v15 == i )
            break;
        }
        if ( (_DWORD)i != -1 )
          sub_995540(*a1, ", ");
        v13 = a2[2];
      }
    }
    sub_995540(*a1, "}");
  }
}
