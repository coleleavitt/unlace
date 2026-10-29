__int64 __fastcall sub_36BF50(__int64 a1, __int64 a2)
{
  char v2; // dl
  void *v3; // rdi
  int v4; // eax
  int v6; // [rsp+Ch] [rbp-6Ch] BYREF
  __int64 (**v7)(void); // [rsp+10h] [rbp-68h] BYREF
  int v8; // [rsp+18h] [rbp-60h]
  int v9; // [rsp+1Ch] [rbp-5Ch]
  __int128 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  void *ptr; // [rsp+48h] [rbp-30h]
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v7 = off_2AFC770;
  ptr = &v7;
  v8 = 0;
  v9 = getinf(19);
  v11 = 0;
  v12 = -1;
  v13 = 0;
  v10 = 0;
  ptr = (void *)idaplace_t__clone();
  v6 = *(_DWORD *)(a1 + 8);
  v2 = bookmarks_t_get(&v10, 0, &v6, 0);
  v3 = ptr;
  v4 = -1;
  if ( v2 )
    v4 = *((_DWORD *)ptr + 3);
  *(_DWORD *)(a2 + 8) = v4;
  if ( v3 )
    qfree(v3);
  return 0;
}

