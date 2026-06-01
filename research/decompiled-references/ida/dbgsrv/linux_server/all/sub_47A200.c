/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A200
// Address: 0x000000000047A200

//----- (000000000047A200) ----------------------------------------------------
__int64 __fastcall sub_47A200(int errnum)
{
  int v1; // ebx
  char *v2; // rax
  char *v3; // rbp
  size_t v4; // rbx
  unsigned __int64 v6; // rax
  void *v7; // r13
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  void *v11; // rax
  char v12[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v13; // [rsp+408h] [rbp-30h]

  v1 = errnum;
  v13 = __readfsqword(0x28u);
  if ( errnum == -1 )
    v1 = *__errno_location();
  v2 = strerror_r(v1, v12, 0x400u);
  v3 = v2;
  if ( v2 )
  {
    v4 = strlen(v2);
    if ( v4 )
    {
      v6 = __readfsqword(0);
      v7 = *(void **)(v6 - 80);
      v8 = v6 - 256;
      if ( *(_QWORD *)(v6 - 64) < v4 + 1 )
      {
        v11 = sub_481540(v6 - 80, *(void **)(v6 - 80), v4 + 1, 1u);
        *(_QWORD *)(v8 + 176) = v11;
        v7 = v11;
      }
      v9 = __readfsqword(0);
      v10 = v9 - 256;
      *(_QWORD *)(v9 - 72) = v4 + 1;
      memmove(v7, v3, v4);
      *(_BYTE *)(*(_QWORD *)(v10 + 176) + v4) = 0;
    }
    else
    {
      *(_QWORD *)(__readfsqword(0) - 72) = 0;
    }
  }
  else
  {
    sub_4172B0(__readfsqword(0) - 80, "unknown error code %d", v1);
  }
  return *(_QWORD *)(__readfsqword(0) - 80);
}
