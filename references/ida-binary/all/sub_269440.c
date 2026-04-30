__int64 sub_269440()
{
  unsigned int v0; // ebp
  char v2; // bl
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  _DWORD *v8; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v9; // [rsp+8h] [rbp-D0h]
  char v10; // [rsp+18h] [rbp-C0h]
  char v11; // [rsp+19h] [rbp-BFh]
  __int64 v12; // [rsp+20h] [rbp-B8h]
  __int128 v13; // [rsp+28h] [rbp-B0h]
  _DWORD *v14; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-98h]
  char v16; // [rsp+50h] [rbp-88h]
  char v17; // [rsp+51h] [rbp-87h]
  __int64 v18; // [rsp+58h] [rbp-80h]
  __int128 v19; // [rsp+60h] [rbp-78h]
  char *v20; // [rsp+70h] [rbp-68h] BYREF
  __int128 v21; // [rsp+78h] [rbp-60h]
  char v22; // [rsp+88h] [rbp-50h]
  char v23; // [rsp+89h] [rbp-4Fh]
  __int64 v24; // [rsp+90h] [rbp-48h]
  __int128 v25; // [rsp+98h] [rbp-40h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-30h] BYREF

  v0 = 0;
  v26 = __readfsqword(0x28u);
  if ( !sub_1A15A0() )
  {
    if ( (get_merge_state() & 3) != 0 )
      v2 = is_diff_merge_mode() + 3;
    else
      v2 = 1 - ((dword_8CC5F0 == 0) - 1);
    v8 = nullptr;
    v9 = 0;
    v3 = (_DWORD *)qvector_reserve(&v8, 0, 8, 1);
    v8 = v3;
    *(_QWORD *)&v9 = 8;
    *v3 = 1634100548;
    *(_DWORD *)((char *)v3 + 3) = 1953264993;
    *((_BYTE *)v8 + 7) = 0;
    v10 = 1;
    v11 = v2;
    v12 = 0;
    v14 = nullptr;
    v13 = 0;
    v15 = 0;
    v4 = (_DWORD *)qvector_reserve(&v14, 0, 8, 1);
    v14 = v4;
    *(_QWORD *)&v15 = 8;
    *v4 = 1634100548;
    *(_DWORD *)((char *)v4 + 3) = 1953264993;
    *((_BYTE *)v14 + 7) = 0;
    v16 = 0;
    v17 = v2;
    v18 = 0;
    v20 = nullptr;
    v19 = 0;
    v21 = 0;
    v20 = (char *)qvector_reserve(&v20, 0, 9, 1);
    *(_QWORD *)&v21 = 9;
    strcpy(v20, "Original");
    v22 = 0;
    v23 = v2;
    v24 = 0;
    v25 = 0;
    v0 = sub_269140((__int64)&v8, 3, 0);
    v5 = &v26;
    do
    {
      v6 = *(v5 - 3);
      v5 -= 7;
      if ( v6 )
      {
        v5[5] = 0;
        qfree(v6, (_BYTE *)&dword_0 + 3);
      }
      v7 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v7, (_BYTE *)&dword_0 + 3);
      }
    }
    while ( v5 != (unsigned __int64 *)&v8 );
  }
  return v0;
}
