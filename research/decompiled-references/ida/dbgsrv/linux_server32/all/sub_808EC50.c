/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808EC50
// Address: 0x0808EC50

//----- (0808EC50) --------------------------------------------------------
int __cdecl sub_808EC50(int a1, char *a2)
{
  int result; // eax
  size_t n; // [esp+6Ch] [ebp-30h]
  char *s; // [esp+70h] [ebp-2Ch]
  void *ptr; // [esp+74h] [ebp-28h] BYREF
  size_t v6; // [esp+78h] [ebp-24h]
  int v7; // [esp+7Ch] [ebp-20h]
  unsigned int v8; // [esp+80h] [ebp-1Ch]

  v8 = __readgsdword(0x14u);
  if ( a1 && *(_BYTE *)a1 == 5 )
  {
    ptr = nullptr;
    v6 = 0;
    v7 = 0;
    if ( a2 )
    {
      n = strlen(a2);
      ptr = sub_80CF920((int)&ptr, nullptr, n + 1, 1u);
      v6 = n + 1;
      memmove(ptr, a2, n);
      *((_BYTE *)ptr + n) = 0;
    }
    if ( sub_808E960(*(_DWORD **)(a1 + 4), (int)&ptr) )
    {
      result = 0;
    }
    else
    {
      sub_80C7910(0, a2);
      result = sub_80C7880(1538);
    }
    if ( ptr )
    {
      s = (char *)result;
      v6 = 0;
      sub_80CF780(ptr);
      result = (int)s;
    }
  }
  else
  {
    result = sub_80C7880(1532);
  }
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
