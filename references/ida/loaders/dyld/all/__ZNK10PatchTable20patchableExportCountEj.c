__int64 __fastcall PatchTable::patchableExportCount(int **this, unsigned int a2)
{
  int *v2; // x8
  int v3; // w9

  v2 = *this;
  v3 = **this;
  if ( (v3 == 4 || v3 == 3 || v3 == 2) && *((_QWORD *)v2 + 2) > (unsigned __int64)a2 )
    return *(unsigned int *)((char *)&v2[4 * a2 + 3] + *((_QWORD *)v2 + 1) - (_QWORD)*(this + 1));
  else
    return 0;
}
