__int64 __fastcall sub_94630(unsigned __int8 *a1, __int64 a2, int a3)
{
  sub_94390(a2 + 4120, a1, a3);
  *(_DWORD *)(a2 + 8244) = scandir64(
                             (const char *)(a2 + 8248),
                             (struct dirent64 ***)(a2 + 8232),
                             nullptr,
                             (int (*)(const struct dirent64 **, const struct dirent64 **))&alphasort64);
  return sub_945A0(a2);
}

