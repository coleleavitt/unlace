/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043AE0
// Address: 0x0000000140043AE0

//----- (0000000140043AE0) ----------------------------------------------------
__int64 *__fastcall sub_140043AE0(__int64 a1, int a2, unsigned __int64 a3, double a4)
{
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *i; // rbx
  __int64 *v10; // rbp
  char v11; // di
  char *Str; // rdi
  char *v13; // rbx
  unsigned int v14; // eax
  char v16[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+48h] [rbp-60h]
  struct __crt_locale_pointers v19[2]; // [rsp+50h] [rbp-58h] BYREF

  v7 = *(__int64 **)(a1 + 312);
  v8 = (__int64 *)v7[1];
  for ( i = v7; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
  {
    if ( v8[4] >= a3 )
      i = v8;
    else
      v8 += 2;
  }
  if ( *((_BYTE *)i + 25) || a3 < i[4] || i == v7 )
    return nullptr;
  v16[0] = 2;
  v18 = 0;
  v10 = nullptr;
  v17 = 0u;
  sub_14005B0A0(v19, 32, "__lc%a", a4);
  sub_140040190();
  sub_140040230(a1, a2);
  if ( *((_BYTE *)i + 464) )
    goto LABEL_12;
  v11 = sub_14002E7F0((const char *)v19, (char *)i[6], nullptr, 0, 1);
  if ( v11 )
  {
    *((_BYTE *)i + 464) = 1;
LABEL_12:
    v11 = sub_140028DE0(v16, (char *)v19, nullptr, 0, 0, 0);
  }
  sub_1400401A0();
  if ( !v11 )
  {
    Str = (char *)sub_140063D90(0);
    v13 = (char *)sub_140063D40(0);
    v14 = sub_140063DE0();
    sub_14004D630(*(_QWORD *)(a1 + 376), a3, v14, v13, Str);
LABEL_17:
    sub_140029390((__int64)v16);
    return v10;
  }
  sub_140029F90((__int64)v16);
  if ( !(_QWORD)v17 )
  {
    v10 = i + 5;
    goto LABEL_17;
  }
  sub_140029390((__int64)v16);
  return nullptr;
}
