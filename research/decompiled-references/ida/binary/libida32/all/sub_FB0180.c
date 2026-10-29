char *__fastcall sub_FB0180(int a1)
{
  __int64 v1; // rax
  char *v2; // rbx

  v1 = *((unsigned __int16 *)&unk_2B23900 + 12 * a1);
  v2 = &byte_23EDAC0[v1];
  if ( !&byte_23EDAC0[v1] )
    return nullptr;
  strlen(&byte_23EDAC0[v1]);
  return v2;
}

