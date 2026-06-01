__int64 __fastcall sub_2D3570(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  unsigned int v9; // eax
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  QT::QWidget *v13; // r14
  QT::QFrame *v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm0
  int v17; // r12d
  int v18; // r12d
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  QT::QFont *v22[2]; // [rsp+10h] [rbp-48h] BYREF
  int v23[2]; // [rsp+20h] [rbp-38h]
  int v24[2]; // [rsp+28h] [rbp-30h]

  v4 = 0;
  *(_QWORD *)v24 = __readfsqword(0x28u);
  if ( qword_8CCE70 )
  {
    if ( *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 && *((int *)qword_8CCE70 + 290) > 0 )
    {
      v4 = (unsigned __int8)byte_8BA8ED;
      if ( byte_8BA8ED )
      {
        if ( *(_DWORD *)(a3 + 4) )
        {
          (*(void (**)(void))(*(_QWORD *)qword_8CCE70 + 1024LL))();
          v8 = *(_DWORD *)(a3 + 4);
          if ( (*(_BYTE *)(a2 + 35) & 6) != 0 )
          {
            v9 = ((v8 >> 31) & 0xFFFFFFEC) + 10;
          }
          else
          {
            a2 = (unsigned int)(int)((double)v8 / a4);
            v9 = sub_286180(*((_QWORD *)qword_8CCE70 + 111), a2);
            if ( !v9 )
              return v4;
          }
          v10 = *((_DWORD *)qword_8CCE70 + 290) - v9;
          if ( v10 > (int)sub_1F7CC0((__int64)qword_8CCE70, a2, a4) )
            v10 = sub_1F7CC0((__int64)qword_8CCE70, a2, a4);
          v13 = qword_8CCE70;
          if ( v10 < 0 )
            v10 = 0;
          v14 = qword_8CCE70;
          *((_DWORD *)qword_8CCE70 + 290) = v10;
          v15 = *(_QWORD *)(a1 + 1016);
          v16 = _mm_loadu_si128((const __m128i *)(a1 + 1000));
          v17 = *(_DWORD *)(a1 + 1020);
          *(_QWORD *)v23 = v15;
          *(__m128i *)v22 = v16;
          v18 = v17 | 1;
          v19 = sub_2D3180(v14, a2, v11, v12, *(double *)v16.m128i_i64);
          v20 = *((_QWORD *)v13 + 129) == 0;
          v21 = v19;
          if ( !v20 )
            sub_2D0F00((__int64)v13, (const char *)a2);
          v23[1] = v18;
          sub_2D2560(v13, (const __m128i *)v22, (int *)&v21);
          *(_QWORD *)a3 = 0;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return v4;
}
