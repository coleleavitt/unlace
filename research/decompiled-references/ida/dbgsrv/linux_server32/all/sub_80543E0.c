/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80543E0
// Address: 0x080543E0

//----- (080543E0) --------------------------------------------------------
int __cdecl sub_80543E0(int a1, char *buf, size_t n)
{
  ssize_t v3; // eax
  int result; // eax
  FILE *stream; // eax
  FILE *v6; // esi
  signed int v7; // ebp
  char path[4096]; // [esp+1Ch] [ebp-1020h] BYREF
  unsigned int v9; // [esp+101Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  sub_80D3B60(path, 4096, "/proc/%u/exe", a1);
  v3 = readlink(path, buf, n - 1);
  if ( v3 > 0 )
  {
    buf[v3] = 0;
LABEL_3:
    result = 1;
    goto LABEL_4;
  }
  stream = sub_80CDA20((int)path, "r");
  v6 = stream;
  if ( stream )
  {
    v7 = sub_80CEE00(stream, buf, n);
    sub_80CF060(v6);
    if ( v7 > 1 && v7 < n && *buf == 47 )
    {
      buf[v7] = 0;
      goto LABEL_3;
    }
  }
  *buf = 0;
  result = 0;
LABEL_4:
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
