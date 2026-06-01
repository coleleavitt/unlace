__int64 __fastcall sub_22880E0(int fd, int a2)
{
  void *v2; // rbp
  int v3; // ebx
  int v4; // eax
  std::_V2 *v6; // rdi

  v2 = (void *)operator new[](0x1000u);
LABEL_2:
  v3 = read(fd, v2, 0x1000u);
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v4 = write(a2, v2, v3);
      if ( v4 < 0 )
        break;
      v3 -= v4;
      if ( !v3 )
        goto LABEL_2;
    }
    v6 = (std::_V2 *)v2;
    operator delete[](v2);
    goto LABEL_7;
  }
  v6 = (std::_V2 *)v2;
  operator delete[](v2);
  if ( v3 < 0 )
  {
LABEL_7:
    std::_V2::generic_category(v6);
    return (unsigned int)*__errno_location();
  }
  std::_V2::system_category((std::_V2 *)v2);
  return 0;
}
