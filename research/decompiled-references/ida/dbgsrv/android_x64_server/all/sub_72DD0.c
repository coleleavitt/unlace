/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_72DD0
// Address: 0x0000000000072DD0

//----- (0000000000072DD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_72DD0(char **ptr, char *a2, double a3, __m128 a4)
{
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // ebp
  int v9; // r12d
  __int64 v10; // rcx
  char *v11; // rax
  int v12; // ecx
  _QWORD v14[3]; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v15[8]; // [rsp+20h] [rbp-B8h] BYREF
  int v16; // [rsp+28h] [rbp-B0h]
  char *v17; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18; // [rsp+58h] [rbp-80h]
  unsigned __int64 v19; // [rsp+60h] [rbp-78h]
  unsigned __int64 v20; // [rsp+A0h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( (*((_DWORD *)ptr + 6))-- == 1 )
  {
    v5 = *((_DWORD *)ptr + 7);
    if ( v5 )
    {
      do
      {
        while ( 1 )
        {
          v6 = sub_6D420(v5);
          v5 = *(_DWORD *)(v6 + 24);
          if ( *(_DWORD *)(v6 + 64) == -1 )
            break;
          v7 = v6;
          *((_DWORD *)ptr + 6) += 32;
          sub_78CB0((__int64)v14, 0, 1);
          v8 = *(_DWORD *)(v7 + 64);
          v9 = v16;
          v10 = v18;
          if ( v19 >= v18 + 1 )
          {
            v11 = v17;
          }
          else
          {
            v11 = (char *)qvector_reserve((__int64)&v17, v17, v18 + 1, 4u);
            v17 = v11;
            v10 = v18;
          }
          *(_DWORD *)&v11[4 * v10] = v9;
          ++v18;
          sub_688B0((__int64)v15, a2, a3, a4);
          sub_77C10(v14, nullptr, nullptr, v8, a3, a4);
          sub_78F40((__int64)v14, a3, a4);
          v12 = *((_DWORD *)ptr + 6) - 32;
          *((_DWORD *)ptr + 6) = v12;
          if ( !v5 || v12 )
          {
            if ( !v12 )
              goto LABEL_13;
            return __readfsqword(0x28u);
          }
        }
      }
      while ( v5 );
      if ( *((_DWORD *)ptr + 6) )
        return __readfsqword(0x28u);
    }
LABEL_13:
    sub_6F300((__int64)ptr, ptr[1], a3, a4);
    operator delete(ptr);
  }
  return __readfsqword(0x28u);
}
