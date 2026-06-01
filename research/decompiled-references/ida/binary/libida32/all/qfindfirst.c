__int64 __fastcall qfindfirst(char *a1, __int64 a2, int a3)
{
  sub_819FF0(a2 + 4120, a1, a3);
  *(_DWORD *)(a2 + 8244) = scandir64(
                             (const char *)(a2 + 8248),
                             (struct dirent64 ***)(a2 + 8232),
                             nullptr,
                             (int (*)(const struct dirent64 **, const struct dirent64 **))&alphasort64);
  return qfindnext(a2);
}

