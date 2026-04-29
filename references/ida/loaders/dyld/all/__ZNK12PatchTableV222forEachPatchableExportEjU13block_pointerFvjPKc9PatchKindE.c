_QWORD *__fastcall PatchTableV2::forEachPatchableExport(_QWORD *result, unsigned int a2, __int64 a3)
{
  _QWORD *v3; // x8
  __int64 v4; // x10
  __int64 v5; // x11
  __int64 v6; // x9
  unsigned __int64 v8; // x20
  char *v9; // x21
  _DWORD *v10; // x23
  __int64 v11; // x24

  v3 = (_QWORD *)*result;
  if ( *(_QWORD *)(*result + 16LL) > (unsigned __int64)a2 )
  {
    v4 = result[1];
    v5 = (__int64)&v3[2 * a2] + v3[1] - v4;
    v6 = *(unsigned int *)(v5 + 12);
    if ( (_DWORD)v6 )
    {
      v8 = v3[12];
      v9 = (char *)v3 + v3[11] - v4;
      v10 = (_DWORD *)((char *)v3 + v3[3] + 8LL * *(unsigned int *)(v5 + 8) - v4 + 4);
      v11 = 8 * v6;
      do
      {
        if ( v8 < (*v10 & 0xFFFFFFFu) )
          abort();
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD))(a3 + 16))(
                             a3,
                             (unsigned int)*(v10 - 1),
                             &v9[*v10 & 0xFFFFFFF],
                             *v10 >> 28);
        v10 += 2;
        v11 -= 8;
      }
      while ( v11 );
    }
  }
  return result;
}
