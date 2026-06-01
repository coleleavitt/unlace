/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001C150
// Address: 0x000000014001C150

//----- (000000014001C150) ----------------------------------------------------
char sub_14001C150()
{
  __int64 *v0; // rax
  __int64 *v1; // rbx
  bool v2; // zf

  v0 = sub_1400019C0();
  v1 = v0;
  if ( *((_BYTE *)v0 + 8) )
  {
    v2 = *((_BYTE *)v0 + 9) == 0;
    *((_BYTE *)v0 + 8) = 0;
    if ( !v2 )
    {
      sub_140012480((__int64)"SeDebugPrivilege", 0);
      *((_BYTE *)v1 + 9) = 0;
    }
    if ( qword_1400CAE68 )
    {
      FreeLibrary(qword_1400CAE68);
      qword_1400CAE68 = nullptr;
    }
    if ( hObject )
    {
      CloseHandle(hObject);
      hObject = nullptr;
      qword_1400CAEB0(aXz);
    }
  }
  return 1;
}
// 1400C6040: using guessed type wchar_t aXz[3];
// 1400CAEB0: using guessed type __int64 (__fastcall *qword_1400CAEB0)(_QWORD);
