char *__fastcall sub_FD3EC0(int a1)
{
  __int64 v1; // rax
  char *v2; // rbx

  v1 = *((unsigned __int16 *)&unk_2B4D8A0 + 12 * a1);
  v2 = &byte_2411C20[v1];
  if ( !&byte_2411C20[v1] )
    return nullptr;
  strlen(&byte_2411C20[v1]);
  return v2;
}
