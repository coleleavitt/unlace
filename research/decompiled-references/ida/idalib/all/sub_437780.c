__int64 __fastcall sub_437780(__int64 a1)
{
  char **v1; // rbx
  __int64 v3; // rdi
  char **v4; // rbx
  _QWORD *v5; // rbp
  char *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  char *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v1 = *(char ***)(a1 + 1880);
  if ( !*(_BYTE *)(*((_QWORD *)*v1 + 209) + 609LL) )
    return v12 - __readfsqword(0x28u);
  sub_436F70(*(_QWORD *)(a1 + 1880), 1u);
  v3 = (__int64)v1;
  v4 = v1 + 5;
  sub_437430(v3, 2u);
  v11 = 3;
  v5 = (_QWORD *)operator new(8u);
  *v5 = off_2B28888;
  v6 = sub_434EA0(v4, &v11);
  v7 = *(_QWORD *)v6;
  *(_QWORD *)v6 = v5;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v11 = 4;
  v8 = (_QWORD *)operator new(8u);
  *v8 = off_2B288C0;
  v9 = sub_434EA0(v4, &v11);
  v10 = *(_QWORD *)v9;
  *(_QWORD *)v9 = v8;
  if ( v10 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  else
    return v12 - __readfsqword(0x28u);
}
