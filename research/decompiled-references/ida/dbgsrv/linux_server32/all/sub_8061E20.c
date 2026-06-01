/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061E20
// Address: 0x08061E20

//----- (08061E20) --------------------------------------------------------
unsigned int __cdecl sub_8061E20(int a1)
{
  const td_thragent_t *v1; // eax
  td_err_e v2; // eax
  td_err_e v3; // ebx
  char *i; // eax
  unsigned int result; // eax
  int v6; // [esp+0h] [ebp-3Ch]
  _DWORD cbdata_p[2]; // [esp+Ch] [ebp-30h] BYREF
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  unsigned int v9; // [esp+18h] [ebp-24h]
  int v10; // [esp+1Ch] [ebp-20h]
  unsigned int v11; // [esp+20h] [ebp-1Ch]

  v11 = __readgsdword(0x14u);
  v1 = *(const td_thragent_t **)(a1 + 528);
  if ( !v1 )
    goto LABEL_9;
  ptr = nullptr;
  cbdata_p[1] = &ptr;
  v9 = 0;
  v10 = 0;
  cbdata_p[0] = a1;
  v2 = td_ta_thr_iter(v1, (td_thr_iter_f *)sub_8059E20, cbdata_p, TD_THR_ANY_STATE, -20, nullptr, 0xFFFFFFFF);
  v3 = v2;
  if ( v2 )
  {
    sub_8054990(v2);
    sub_8058290();
    if ( ptr )
    {
LABEL_8:
      v9 = 0;
      sub_80CF780(ptr);
    }
  }
  else
  {
    if ( v9 )
    {
      v6 = 0;
      for ( i = (char *)ptr; ; i = (char *)ptr + v3 )
      {
        sub_80608E0(a1, *((_DWORD *)i + 16), *((_DWORD *)i + 4));
        v3 += 336;
        if ( ++v6 >= v9 )
          break;
        sub_8061880(a1, *(_DWORD *)((char *)ptr + v3 + 64), 0);
      }
    }
    if ( ptr )
      goto LABEL_8;
  }
LABEL_9:
  result = v11 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
