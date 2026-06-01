/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: throw_idc_exception
// Address: 0x00044540

//----- (00044540) --------------------------------------------------------
int __cdecl throw_idc_exception(int a1, char *s)
{
  int idc_class; // eax
  size_t v3; // eax
  int v4; // esi
  int v6; // [esp+10h] [ebp-2Ch] BYREF
  int v7[10]; // [esp+14h] [ebp-28h] BYREF

  v7[5] = __readgsdword(0x14u);
  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  LOBYTE(v6) = 2;
  memset(v7, 0, 16);
  free_idcv((char *)&v6);
  if ( s )
    v3 = strlen(s);
  else
    v3 = 0;
  LOBYTE(v6) = 7;
  sub_2DCA0(v7, s, v3);
  set_idcv_attr(a1, "description", (char *)&v6, 0);
  v4 = set_qerrno(90);
  free_idcv((char *)&v6);
  return v4;
}
