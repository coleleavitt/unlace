/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A79C0
// Address: 0x00000000000A79C0

//----- (00000000000A79C0) ----------------------------------------------------
__int64 __fastcall sub_A79C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  char v9; // [rsp+Fh] [rbp-49h] BYREF
  __int128 v10; // [rsp+10h] [rbp-48h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+30h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  LOBYTE(v4) = 1;
  if ( !sub_A0870(a1, a2, a3, a4) )
  {
    v10 = 0;
    v11 = 0;
    v6 = *(_QWORD *)(a1 + 552);
    if ( !v6 )
      LODWORD(v6) = *(_DWORD *)(a1 + 648);
    sub_9A950((__int64)&v10, (int)v6);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
           a1,
           (unsigned int)a2,
           1,
           v10,
           0) == 1
      && (*(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
           a1,
           *(_QWORD *)(v10 + 32LL * *(int *)(a1 + 656) + 8),
           &v9,
           1,
           0) == 1
      && (v9 & 0xFE) == 0xC2
      && (v8 = -1,
          (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
            a1,
            *(_QWORD *)(v10 + 32LL * *(int *)(a1 + 652) + 8),
            &v8,
            8,
            0) == 8) )
    {
      LOBYTE(v4) = v8 == a4;
    }
    else
    {
      v4 = 0;
    }
    sub_9AA40((__int64)&v10);
  }
  return v4;
}
// A7AE5: variable 'v4' is possibly undefined
