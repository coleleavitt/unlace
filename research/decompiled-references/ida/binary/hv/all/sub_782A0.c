void __fastcall sub_782A0(void *a1)
{
  bool v1; // zf

  v1 = *((_BYTE *)a1 + 48) == 0;
  *(_QWORD *)a1 = off_163AF0;
  if ( !v1 )
    sub_92380(*((void **)a1 + 3));
  operator delete(a1, 0x38u);
}

