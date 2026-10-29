/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C21D0
// Address: 0x080C21D0

//----- (080C21D0) --------------------------------------------------------
int __cdecl sub_80C21D0(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  char *v4; // eax
  pthread_mutex_t *mutex; // [esp+0h] [ebp-1Ch]

  mutex = (pthread_mutex_t *)a1[2];
  sub_80D15A0(mutex);
  v2 = *((unsigned __int8 *)a1 + 28);
  if ( !*((_BYTE *)a1 + 28) )
  {
    if ( !(unsigned __int8)sub_80C1B40((int)a1) )
    {
      *a2 = "dlopen";
      goto LABEL_3;
    }
    v4 = sub_80C1EC0((int)a1);
    if ( !v4 )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_80C1F30(a1, (int)v4, 0x1000164u) )
    {
      *a2 = "unsupported_version";
      goto LABEL_3;
    }
    if ( !(*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*a1 + 8))(*a1, a1[4]) )
    {
LABEL_11:
      *a2 = "dlsym";
      goto LABEL_3;
    }
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*a1 + 12))(*a1);
    if ( !(unsigned __int8)sub_80C20F0(a1) )
    {
      *a2 = "openssl";
      goto LABEL_3;
    }
    *((_BYTE *)a1 + 28) = 1;
  }
  v2 = 1;
LABEL_3:
  sub_80D1600(mutex);
  return v2;
}
