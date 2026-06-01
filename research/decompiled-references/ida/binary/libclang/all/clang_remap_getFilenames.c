void __fastcall clang_remap_getFilenames(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx

  if ( a3 )
  {
    *a3 = sub_6905C0(*(void **)(*a1 + ((unsigned __int64)a2 << 6)), *(_QWORD *)(*a1 + ((unsigned __int64)a2 << 6) + 8));
    a3[1] = v6;
  }
  if ( a4 )
  {
    *a4 = sub_6905C0(
            *(void **)(*a1 + ((unsigned __int64)a2 << 6) + 32),
            *(_QWORD *)(*a1 + ((unsigned __int64)a2 << 6) + 40));
    a4[1] = v7;
  }
}

