/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC320
// Address: 0x000AC320

//----- (000AC320) --------------------------------------------------------
void __cdecl sub_AC320(_DWORD *a1)
{
  int v1; // ecx
  void *v2; // eax
  void *v3; // esi
  int v4; // eax

  *a1 = &off_1392E8;
  v1 = a1[4];
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      v2 = (void *)a1[5];
      if ( v2 )
        operator delete(v2);
    }
    else if ( v1 != 2 )
    {
      if ( !(_BYTE)under_debugger )
        interr(193);
      BUG();
    }
  }
  else
  {
    v3 = (void *)a1[5];
    if ( v3 )
    {
      if ( *(int *)v3 < 2 )
      {
        qfclose(*((FILE **)v3 + 1));
      }
      else
      {
        v4 = *((_DWORD *)v3 + 1);
        if ( v4 )
          (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v4 + 8))(*((_DWORD *)v3 + 1));
        qfree(*((void **)v3 + 7));
        qfree(*((void **)v3 + 6));
      }
      operator delete(v3);
    }
  }
}
// 1392E8: using guessed type void (__noreturn *off_1392E8)();
// 13E34C: using guessed type int under_debugger;
