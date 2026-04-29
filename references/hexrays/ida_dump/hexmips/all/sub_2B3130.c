unsigned __int64 __fastcall sub_2B3130(__int64 a1, __int64 a2, int *a3, unsigned int a4)
{
  int v4; // eax
  _DWORD *v8; // rdx
  _DWORD *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+8h] [rbp-60h]
  __int128 v12; // [rsp+10h] [rbp-58h]
  _DWORD *v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v4 = *a3;
  v15 = __readfsqword(0x28u);
  if ( (unsigned int)(v4 - 3) > 1 )
  {
LABEL_2:
    sub_327340(&v10, a1, a4);
    goto LABEL_3;
  }
  v10 = 0;
  v11 = 0;
  v13 = nullptr;
  v12 = 0;
  v14 = 0;
  sub_CBD70(0x7D4u, &v10, 64);
  if ( (((_DWORD)v10 - 2) & 0xFFFFFFFD) != 0 )
    goto LABEL_15;
  v8 = &v13[v14];
  if ( v8 == v13 )
    goto LABEL_15;
  v9 = v13;
  while ( *v9 != *((unsigned __int16 *)a3 + 4) )
  {
    if ( v8 == ++v9 )
      goto LABEL_15;
  }
  if ( v8 == v9 )
  {
LABEL_15:
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    goto LABEL_2;
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  sub_327220(&v10, a1, a4);
LABEL_3:
  copy_tinfo_t(a2, &v10);
  clear_tinfo_t(&v10);
  return v15 - __readfsqword(0x28u);
}
