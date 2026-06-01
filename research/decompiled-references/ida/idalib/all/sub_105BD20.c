__int64 __fastcall sub_105BD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char ***a6)
{
  int v9; // eax
  int v11; // ebp
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax

  v9 = sub_10AFEA0(a1, a4, a5);
  if ( v9 > 9 )
  {
    v11 = v9;
    v12 = j__strlen("transactional-execution");
    *(_BYTE *)sub_102FB20(a2, "transactional-execution", v12) = 1;
    if ( v11 != 10 )
    {
      v13 = j__strlen("vector");
      *(_BYTE *)sub_102FB20(a2, "vector", v13) = 1;
      if ( v11 != 11 )
      {
        v14 = j__strlen("vector-enhancements-1");
        *(_BYTE *)sub_102FB20(a2, "vector-enhancements-1", v14) = 1;
        if ( v11 != 12 )
        {
          v15 = j__strlen("vector-enhancements-2");
          *(_BYTE *)sub_102FB20(a2, "vector-enhancements-2", v15) = 1;
          if ( v11 != 13 )
          {
            v16 = j__strlen("nnp-assist");
            *(_BYTE *)sub_102FB20(a2, "nnp-assist", v16) = 1;
            if ( v11 != 14 )
            {
              v17 = j__strlen("miscellaneous-extensions-4");
              *(_BYTE *)sub_102FB20(a2, "miscellaneous-extensions-4", v17) = 1;
              v18 = j__strlen("vector-enhancements-3");
              *(_BYTE *)sub_102FB20(a2, "vector-enhancements-3", v18) = 1;
            }
          }
        }
      }
    }
  }
  return sub_102FFA0(a1, a2, a3, a4, a5, a6);
}
