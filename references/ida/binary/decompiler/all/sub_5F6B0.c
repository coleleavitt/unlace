int sub_5F6B0()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4ED9A0 = 0;
  qword_4ED9C8 = 0;
  qword_4ED9F0 = 0;
  xmmword_4ED980 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2590),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4ED990 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2598),
                               (__m128i)(unsigned __int64)&unk_42F4D1);
  xmmword_4ED9A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25A0),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4ED9B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25A8),
                               (__m128i)(unsigned __int64)&unk_42F2A1);
  xmmword_4ED9D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25B0),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4ED9E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25B8),
                               (__m128i)(unsigned __int64)&unk_42F4B9);
  xmmword_4ED9F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25C0),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4EDA08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25C8),
                               (__m128i)(unsigned __int64)&unk_42F286);
  v1 = "atan2";
  qword_4EDA18 = 0;
  xmmword_4EDA20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25D0),
                               (__m128i)(unsigned __int64)"atan");
  qword_4EDA40 = 0;
  qword_4EDA68 = 0;
  xmmword_4EDA30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25D8),
                               (__m128i)(unsigned __int64)&unk_42F49E);
  qword_4EDA90 = 0;
  qword_4EDAB8 = 0;
  xmmword_4EDA48 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4EDAE0 = 0;
  xmmword_4EDA58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25E8),
                               (__m128i)(unsigned __int64)&unk_42F481);
  xmmword_4EDA70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25F0),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4EDA80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E25F8),
                               (__m128i)(unsigned __int64)&unk_42F269);
  xmmword_4EDA98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2600),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4EDAA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2608),
                               (__m128i)(unsigned __int64)&unk_42F251);
  xmmword_4EDAC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2610),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4EDAD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2618),
                               (__m128i)(unsigned __int64)&unk_42F469);
  xmmword_4EDAE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2620),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4EDAF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2628),
                               (__m128i)(unsigned __int64)&unk_42F239);
  qword_4EDB08 = 0;
  qword_4EDB30 = 0;
  qword_4EDB58 = 0;
  xmmword_4EDB10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2630),
                               (__m128i)(unsigned __int64)"cos");
  qword_4EDB80 = 0;
  qword_4EDBA8 = 0;
  xmmword_4EDB20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2638),
                               (__m128i)(unsigned __int64)&unk_42F451);
  qword_4EDBD0 = 0;
  qword_4EDBF8 = 0;
  xmmword_4EDB38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2640),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4EDB48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2648),
                               (__m128i)(unsigned __int64)&unk_42F439);
  xmmword_4EDB60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2650),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4EDB70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2658),
                               (__m128i)(unsigned __int64)&unk_42F221);
  xmmword_4EDB88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2660),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4EDB98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2668),
                               (__m128i)(unsigned __int64)&unk_42F209);
  xmmword_4EDBB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2670),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4EDBC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2678),
                               (__m128i)(unsigned __int64)&unk_42F421);
  xmmword_4EDBD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2680),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4EDBE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2688),
                               (__m128i)(unsigned __int64)&unk_42F1F1);
  xmmword_4EDC00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2690),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4EDC20 = 0;
  qword_4EDC48 = 0;
  xmmword_4EDC10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2698),
                               (__m128i)(unsigned __int64)&unk_42F409);
  qword_4EDC70 = 0;
  qword_4EDC98 = 0;
  xmmword_4EDC28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E26A0),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4EDCC0 = 0;
  qword_4EDCE8 = 0;
  xmmword_4EDC38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E26A8),
                               (__m128i)(unsigned __int64)&unk_42F1D9);
  xmmword_4EDC50 = (__int128)_mm_loadh_ps((const double *)&off_4E26B8);
  xmmword_4EDC60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E26C0),
                               (__m128i)(unsigned __int64)&unk_42F3EE);
  xmmword_4EDC78 = (__int128)_mm_loadh_ps((const double *)&off_4E26D0);
  xmmword_4EDC88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E26D8),
                               (__m128i)(unsigned __int64)&unk_42F1BE);
  xmmword_4EDCA0 = (__int128)_mm_loadh_ps((const double *)&off_4E26E8);
  xmmword_4EDCB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E26F0),
                               (__m128i)(unsigned __int64)&unk_42F3D0);
  xmmword_4EDCC8 = (__int128)_mm_loadh_ps((const double *)&off_4E2700);
  xmmword_4EDCD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2708),
                               (__m128i)(unsigned __int64)&unk_42F1A0);
  qword_4EDD10 = 0;
  qword_4EDD38 = 0;
  xmmword_4EDCF0 = (__int128)_mm_loadh_ps((const double *)&off_4E2718);
  qword_4EDD60 = 0;
  qword_4EDD88 = 0;
  xmmword_4EDD00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2720),
                               (__m128i)(unsigned __int64)&unk_42F368);
  qword_4EDDB0 = 0;
  xmmword_4EDD18 = (__int128)_mm_loadh_ps((const double *)&off_4E2730);
  xmmword_4EDD28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2738),
                               (__m128i)(unsigned __int64)&unk_42F381);
  xmmword_4EDD40 = (__int128)_mm_loadh_ps((const double *)&off_4E2748);
  xmmword_4EDD50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2750),
                               (__m128i)(unsigned __int64)&unk_42F151);
  xmmword_4EDD68 = (__int128)_mm_loadh_ps((const double *)&off_4E2760);
  xmmword_4EDD78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2768),
                               (__m128i)(unsigned __int64)&unk_42F138);
  xmmword_4EDD90 = (__int128)_mm_loadh_ps((const double *)&off_4E2778);
  xmmword_4EDDA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2780),
                               (__m128i)(unsigned __int64)&unk_42F331);
  xmmword_4EDDB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2788),
                               (__m128i)(unsigned __int64)"powl");
  qword_4EDDD8 = 0;
  qword_4EDE00 = 0;
  xmmword_4EDDC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2790),
                               (__m128i)(unsigned __int64)&unk_42F101);
  qword_4EDE28 = 0;
  qword_4EDE50 = 0;
  xmmword_4EDDE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2798),
                               (__m128i)(unsigned __int64)"sin");
  qword_4EDE78 = 0;
  qword_4EDEA0 = 0;
  xmmword_4EDDF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27A0),
                               (__m128i)(unsigned __int64)&unk_42F319);
  xmmword_4EDE08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27A8),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4EDE18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27B0),
                               (__m128i)(unsigned __int64)&unk_42F301);
  xmmword_4EDE30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27B8),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4EDE40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27C0),
                               (__m128i)(unsigned __int64)&unk_42F0E9);
  xmmword_4EDE58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27C8),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4EDE68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27D0),
                               (__m128i)(unsigned __int64)&unk_42F0D1);
  xmmword_4EDE80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27D8),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4EDE90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27E0),
                               (__m128i)(unsigned __int64)&unk_42F2E9);
  xmmword_4EDEA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27E8),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4EDEB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27F0),
                               (__m128i)(unsigned __int64)&unk_42F0B9);
  qword_4EDEC8 = 0;
  qword_4EDF70 = (__int64)"acos";
  qword_4EDF98 = (__int64)"acosl";
  xmmword_4EDED0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E27F8),
                               (__m128i)(unsigned __int64)"tan");
  qword_4EDFC0 = (__int64)"asin";
  qword_4EDEF0 = 0;
  xmmword_4EDEE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2800),
                               (__m128i)(unsigned __int64)&unk_42F2D1);
  qword_4EDF18 = 0;
  qword_4EDF40 = 0;
  xmmword_4EDEF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2808),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4EDF68 = 0;
  qword_4EDF78 = 0;
  xmmword_4EDF08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2810),
                               (__m128i)(unsigned __int64)&unk_42F2B9);
  qword_4EDF90 = 0;
  qword_4EDFA0 = 0;
  xmmword_4EDF20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2818),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4EDFB8 = 0;
  qword_4EDFC8 = 0;
  xmmword_4EDF30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2820),
                               (__m128i)(unsigned __int64)&unk_42F0A1);
  xmmword_4EDF48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2828),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4EDF58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2830),
                               (__m128i)(unsigned __int64)&unk_42F08B);
  xmmword_4EDF80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2838),
                               (__m128i)(unsigned __int64)&unk_42F4E0);
  xmmword_4EDFA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2840),
                               (__m128i)(unsigned __int64)&unk_42F2B0);
  qword_4EDFE8 = (__int64)"asinl";
  qword_4EE060 = (__int64)"atan2l";
  xmmword_4EDFD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2848),
                               (__m128i)(unsigned __int64)&unk_42F4C8);
  qword_4EE010 = (__int64)"atan";
  qword_4EE038 = (__int64)"atan2";
  xmmword_4EDFF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2850),
                               (__m128i)(unsigned __int64)&unk_42F298);
  qword_4EE088 = (__int64)"atanl";
  qword_4EE0B0 = (__int64)"ceil";
  xmmword_4EE020 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2858),
                               (__m128i)(unsigned __int64)&unk_42F4B0);
  qword_4EDFE0 = 0;
  qword_4EDFF0 = 0;
  xmmword_4EE048 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2860),
                               (__m128i)(unsigned __int64)&unk_42F492);
  qword_4EE008 = 0;
  qword_4EE018 = 0;
  xmmword_4EE070 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2868),
                               (__m128i)(unsigned __int64)&unk_42F27A);
  qword_4EE030 = 0;
  qword_4EE040 = 0;
  xmmword_4EE098 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2870),
                               (__m128i)(unsigned __int64)&unk_42F260);
  qword_4EE058 = 0;
  qword_4EE068 = 0;
  xmmword_4EE0C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2878),
                               (__m128i)(unsigned __int64)&unk_42F478);
  qword_4EE080 = 0;
  qword_4EE090 = 0;
  qword_4EE0A8 = 0;
  qword_4EE0B8 = 0;
  qword_4EE0D0 = 0;
  qword_4EE0D8 = (__int64)"ceill";
  qword_4EE100 = (__int64)"cos";
  qword_4EE128 = (__int64)"cosh";
  xmmword_4EE0E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2880),
                               (__m128i)(unsigned __int64)&unk_42F248);
  qword_4EE150 = (__int64)"coshl";
  qword_4EE178 = (__int64)"cosl";
  xmmword_4EE110 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2888),
                               (__m128i)(unsigned __int64)&unk_42F460);
  qword_4EE1A0 = (__int64)"exp";
  qword_4EE1C8 = (__int64)"expl";
  xmmword_4EE138 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2890),
                               (__m128i)(unsigned __int64)&unk_42F448);
  qword_4EE0E0 = 0;
  qword_4EE0F8 = 0;
  xmmword_4EE160 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2898),
                               (__m128i)(unsigned __int64)&unk_42F230);
  qword_4EE108 = 0;
  qword_4EE120 = 0;
  xmmword_4EE188 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28A0),
                               (__m128i)(unsigned __int64)&unk_42F218);
  qword_4EE130 = 0;
  qword_4EE148 = 0;
  qword_4EE158 = 0;
  qword_4EE170 = 0;
  qword_4EE180 = 0;
  qword_4EE198 = 0;
  qword_4EE1A8 = 0;
  qword_4EE1C0 = 0;
  qword_4EE1D0 = 0;
  xmmword_4EE1B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28A8),
                               (__m128i)(unsigned __int64)&unk_42F430);
  qword_4EE240 = (__int64)"floor";
  qword_4EE1F0 = (__int64)"fabs";
  xmmword_4EE1D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28B0),
                               (__m128i)(unsigned __int64)&unk_42F200);
  qword_4EE268 = (__int64)"floorl";
  qword_4EE218 = (__int64)"fabsl";
  xmmword_4EE200 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28B8),
                               (__m128i)(unsigned __int64)&unk_42F418);
  qword_4EE290 = (__int64)"fmod";
  qword_4EE1E8 = 0;
  xmmword_4EE228 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28C0),
                               (__m128i)(unsigned __int64)&unk_42F1E8);
  qword_4EE2B8 = (__int64)"fmodl";
  qword_4EE1F8 = 0;
  xmmword_4EE250 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28C8),
                               (__m128i)(unsigned __int64)&unk_42F400);
  qword_4EE210 = 0;
  qword_4EE220 = 0;
  xmmword_4EE278 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28D0),
                               (__m128i)(unsigned __int64)&unk_42F1D0);
  qword_4EE238 = 0;
  qword_4EE248 = 0;
  xmmword_4EE2A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28D8),
                               (__m128i)(unsigned __int64)&unk_42F3E2);
  qword_4EE260 = 0;
  qword_4EE270 = 0;
  xmmword_4EE2C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28E0),
                               (__m128i)(unsigned __int64)&unk_42F1B2);
  qword_4EE288 = 0;
  qword_4EE298 = 0;
  qword_4EE2B0 = 0;
  qword_4EE2C0 = 0;
  qword_4EE2D8 = 0;
  qword_4EE2E0 = (__int64)"frexp";
  qword_4EE2E8 = 0;
  qword_4EE308 = (__int64)"frexpl";
  xmmword_4EE2F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28E8),
                               (__m128i)(unsigned __int64)&unk_42F3B8);
  qword_4EE330 = (__int64)"ldexp";
  qword_4EE300 = 0;
  xmmword_4EE318 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28F0),
                               (__m128i)(unsigned __int64)&unk_42F188);
  qword_4EE358 = (__int64)"ldexpl";
  qword_4EE310 = 0;
  xmmword_4EE340 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E28F8),
                               (__m128i)(unsigned __int64)&unk_42F3A0);
  qword_4EE380 = (__int64)"log";
  qword_4EE328 = 0;
  xmmword_4EE368 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2900),
                               (__m128i)(unsigned __int64)&unk_42F170);
  qword_4EE3A8 = (__int64)"log10";
  qword_4EE338 = 0;
  xmmword_4EE390 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2908),
                               (__m128i)(unsigned __int64)&unk_42F378);
  qword_4EE3D0 = (__int64)"log10l";
  qword_4EE350 = 0;
  qword_4EE360 = 0;
  qword_4EE378 = 0;
  qword_4EE388 = 0;
  qword_4EE3A0 = 0;
  qword_4EE3B0 = 0;
  qword_4EE3C8 = 0;
  qword_4EE3D8 = 0;
  xmmword_4EE3B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2910),
                               (__m128i)(unsigned __int64)&unk_42F390);
  qword_4EE3F8 = (__int64)"logl";
  qword_4EE4C0 = (__int64)"sin";
  xmmword_4EE3E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2918),
                               (__m128i)(unsigned __int64)&unk_42F160);
  qword_4EE420 = (__int64)"modf";
  qword_4EE498 = (__int64)"powl";
  xmmword_4EE408 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2920),
                               (__m128i)(unsigned __int64)&unk_42F148);
  qword_4EE448 = (__int64)"modfl";
  qword_4EE3F0 = 0;
  xmmword_4EE430 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2928),
                               (__m128i)(unsigned __int64)&unk_42F350);
  qword_4EE470 = (__int64)"pow";
  qword_4EE400 = 0;
  xmmword_4EE458 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2930),
                               (__m128i)(unsigned __int64)&unk_42F120);
  qword_4EE418 = 0;
  qword_4EE428 = 0;
  xmmword_4EE480 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2938),
                               (__m128i)(unsigned __int64)&unk_42F342);
  qword_4EE440 = 0;
  qword_4EE450 = 0;
  xmmword_4EE4A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2940),
                               (__m128i)(unsigned __int64)&unk_42F112);
  qword_4EE468 = 0;
  qword_4EE478 = 0;
  xmmword_4EE4D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2948),
                               (__m128i)(unsigned __int64)&unk_42F328);
  qword_4EE490 = 0;
  qword_4EE4A0 = 0;
  qword_4EE4B8 = 0;
  qword_4EE4C8 = 0;
  qword_4EE4E0 = 0;
  qword_4EE4E8 = (__int64)"sinh";
  qword_4EE510 = (__int64)"sinhl";
  xmmword_4EE4F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2950),
                               (__m128i)(unsigned __int64)&unk_42F310);
  qword_4EE538 = (__int64)"sinl";
  qword_4EE560 = (__int64)"sqrt";
  xmmword_4EE520 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2958),
                               (__m128i)(unsigned __int64)&unk_42F0F8);
  qword_4EE588 = (__int64)"sqrtl";
  qword_4EE5B0 = (__int64)"tan";
  xmmword_4EE548 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2960),
                               (__m128i)(unsigned __int64)&unk_42F0E0);
  qword_4EE5D8 = (__int64)"tanh";
  qword_4EE4F0 = 0;
  xmmword_4EE570 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2968),
                               (__m128i)(unsigned __int64)&unk_42F2F8);
  qword_4EE508 = 0;
  qword_4EE518 = 0;
  xmmword_4EE598 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2970),
                               (__m128i)(unsigned __int64)&unk_42F0C8);
  qword_4EE530 = 0;
  qword_4EE540 = 0;
  qword_4EE558 = 0;
  qword_4EE568 = 0;
  qword_4EE580 = 0;
  qword_4EE590 = 0;
  qword_4EE5A8 = 0;
  qword_4EE5B8 = 0;
  qword_4EE5D0 = 0;
  qword_4EE5E0 = 0;
  xmmword_4EE5C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2978),
                               (__m128i)(unsigned __int64)&unk_42F2E0);
  qword_4EE5F8 = 0;
  qword_4EE608 = 0;
  xmmword_4EE5E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2980),
                               (__m128i)(unsigned __int64)&unk_42F2C8);
  qword_4EE620 = 0;
  qword_4EE630 = 0;
  xmmword_4EE610 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2988),
                               (__m128i)(unsigned __int64)&unk_42F0B0);
  qword_4EE648 = 0;
  qword_4EE600 = (__int64)"tanhl";
  xmmword_4EE638 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2990),
                               (__m128i)(unsigned __int64)&unk_42F098);
  qword_4EE628 = (__int64)"tanl";
  __cxa_atexit(sub_315090, 0, &off_4DB300);
  xmmword_4ED7E0 = 0;
  *(_QWORD *)&xmmword_4ED7E0 = "__m64";
  qword_4ED800 = 0;
  qword_4ED808 = (__int64)"__m128";
  xmmword_4ED7F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2998),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4ED830 = (__int64)"__m128d";
  qword_4ED810 = 0;
  xmmword_4ED818 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29A0),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4ED858 = (__int64)"__m128i";
  qword_4ED828 = 0;
  xmmword_4ED840 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29A8),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4ED880 = (__int64)"__m256";
  qword_4ED838 = 0;
  xmmword_4ED868 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29B0),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4ED8A8 = (__int64)"__m256d";
  qword_4ED850 = 0;
  xmmword_4ED890 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29B8),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4ED8D0 = (__int64)"__m256i";
  qword_4ED860 = 0;
  qword_4ED878 = 0;
  qword_4ED888 = 0;
  qword_4ED8A0 = 0;
  qword_4ED8B0 = 0;
  qword_4ED8C8 = 0;
  qword_4ED8D8 = 0;
  xmmword_4ED8B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29C0),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4ED8F8 = (__int64)"__m512";
  qword_4ED8F0 = 0;
  xmmword_4ED8E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29C8),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4ED920 = (__int64)"__m512d";
  qword_4ED900 = 0;
  xmmword_4ED908 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29D0),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4ED948 = (__int64)"__m512i";
  qword_4ED918 = 0;
  xmmword_4ED930 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E29D8),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4ED928 = 0;
  qword_4ED940 = 0;
  qword_4ED950 = 0;
  qword_4ED968 = 0;
  xmmword_4ED958 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4E29E0),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_315050, 0, &off_4DB300);
}
