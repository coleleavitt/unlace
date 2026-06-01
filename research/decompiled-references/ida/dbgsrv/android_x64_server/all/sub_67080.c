/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67080
// Address: 0x0000000000067080

//----- (0000000000067080) ----------------------------------------------------
__int64 __fastcall sub_67080(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // rax
  char v3; // bp
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  char *v7; // rax
  int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  v2 = sub_64D00((_QWORD *)a1, a2, &v9);
  v3 = -7;
  switch ( v9 )
  {
    case 0:
      v4 = 53;
      goto LABEL_11;
    case 1:
      goto LABEL_6;
    case 2:
      v3 = -8;
      goto LABEL_6;
    case 3:
      v3 = -6;
LABEL_6:
      sub_61AC0(a1, v2);
      v5 = *(_QWORD *)(a1 + 200);
      v6 = *(_QWORD *)(v5 + 8);
      if ( *(_QWORD *)(v5 + 16) >= (unsigned __int64)(v6 + 1) )
      {
        v7 = *(char **)v5;
      }
      else
      {
        v7 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v5, v6 + 1, 1u);
        *(_QWORD *)v5 = v7;
        v6 = *(_QWORD *)(v5 + 8);
      }
      v7[v6] = v3;
      ++*(_QWORD *)(v5 + 8);
      ++*(_DWORD *)(a1 + 208);
      return 0;
    case 6:
      v4 = 1565;
      goto LABEL_11;
    default:
      v4 = 1564;
LABEL_11:
      set_qerrno(v4);
      set_error_string(0, a2);
      return set_qerrno(0x35u);
  }
}
