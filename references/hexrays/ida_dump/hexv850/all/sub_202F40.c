__int64 __fastcall sub_202F40(_QWORD *a1, int a2, int a3)
{
  char v3; // r12
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v9; // r15
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  __int64 v22; // [rsp-8h] [rbp-90h]
  __int64 *v23; // [rsp+0h] [rbp-88h]
  unsigned __int64 v24; // [rsp+10h] [rbp-78h] BYREF
  char v25; // [rsp+18h] [rbp-70h]
  int v26; // [rsp+1Ch] [rbp-6Ch]
  __int64 (__fastcall **v27)(); // [rsp+20h] [rbp-68h] BYREF
  __m128i *v28; // [rsp+28h] [rbp-60h]
  unsigned __int64 v29; // [rsp+30h] [rbp-58h]
  int v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v3 = 2;
  v6 = a1[7];
  v7 = (__int64 *)a1[9];
  v31 = __readfsqword(0x28u);
  v30 = a2;
  v9 = *(_QWORD *)(v6 + 1504);
  v27 = off_4B2870;
  v10 = (__int64 *)a1[10];
  v11 = v7;
  v28 = nullptr;
  v12 = v9;
  v29 = 0;
  v23 = v10;
  if ( !(unsigned int)sub_100280(v7, v9, &v27, 7) )
  {
    v11 = v23;
    v12 = v9;
    v3 = 0;
    if ( !(unsigned int)sub_100280(v23, v9, &v27, 7) )
      return 1;
    v7 = (__int64 *)a1[10];
    v23 = v7;
  }
  v13 = (_QWORD *)a1[8];
  v14 = *v13 + 104LL * a2;
  if ( *(_DWORD *)v14 != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51868);
    goto LABEL_20;
  }
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(int *)(v29 + 40);
  if ( *(_BYTE *)(v29 + 32) != 5 )
    sub_1FBF80(v11, v12, v16, v13);
  v17 = *(_QWORD *)(v29 + 24);
  if ( *(_DWORD *)(v29 + 40) && v15 >= v17 && v16 + v17 - 1 >= v15 + a3 - 1 )
  {
    if ( (*(_BYTE *)(v29 + 48) & 4) != 0 )
      return 1;
    if ( !under_debugger )
      sub_37CFE0(51970);
LABEL_20:
    BUG();
  }
  v25 = 5;
  v24 = v15;
  v26 = a3;
  if ( (unsigned int)sub_1FD8E0((__int64)a1, v7, v23, v28, v29, (__int64)&v24, v3) )
    return 1;
  v21 = a1[7];
  if ( (*(_BYTE *)(*(_QWORD *)(v21 + 1496) + 604LL) & 0x10) != 0 )
    sub_1EB4F0(v21, -1, 20, v22, v19, v20);
  return 0;
}
